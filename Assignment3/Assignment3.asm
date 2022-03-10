.include "/home/ramesh720/m328Pdef.inc"

Start:
	ldi r17, 0b11000011 ; identifying input pins 10,11,12,13
	out DDRB,r17		; declaring pins as input
	ldi r17, 0b11111111 ;
	out PORTB,r17		; activating internal pullup for pins 10,11,12,13  
	in r17,PINB
	
	ldi r20,0b00000010
	rcall loopr
	
	ldi r21,0b00000001
	and r21,r17 ;w
	lsr r17
	ldi r22,0b00000001
	and r22,r17 ;z
	lsr r17
	ldi r23,0b00000001
	and r23,r17 ;y
	lsr r17
	ldi r24,0b00000001
	and r24,r17 ;x

	ldi r25,0b00000001
	
	and r23,r24  ;xy
	or r24,r23   ;x+xy



	ldi r20,0b00000010
	rcall loopl

	ldi r16, 0b00111100 ;identifying output pins 2,3,4,5
	out DDRD,r16		;declaring pins as output
	out PORTD,r24		;writing output to pins 2,3,4,5
	

	rjmp Start

loopr:	lsr r17
	dec r20
	brne loopr
	ret

loopl:	lsl r24
	dec r20
	brne loopl
	ret
