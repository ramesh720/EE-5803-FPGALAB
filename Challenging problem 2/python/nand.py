
## To run this program, you need install keras and tensorflow
## use these commands to install them

## pip install keras
## pip install tensorflow
import tensorflow as tf
from tensorflow.keras.layers import Dense,Input
from tensorflow.keras.models import Model
import numpy as np

##inputs
X=[[0,0],[0,1],[1,0],[1,1]]
X#=np.array(X)

## y_true
Y=[1,1,1,0]

## designing model
a=Input(shape=(2,))
b=Dense(64,activation='linear')(a)
c=Dense(1,activation='sigmoid')(b)
opt = tf.keras.optimizers.Adam(learning_rate=0.1)
model=Model(inputs=a,outputs=c)
model.compile(loss='binary_crossentropy', optimizer=opt,metrics=['accuracy'])

## training model
model.fit(X,Y,epochs=20)


## predicting outputs
y_pred=model.predict(X)

y_pred[y_pred>0.5]=1
y_pred[y_pred<0.5]=0
y_pred=np.array(y_pred,dtype='int32')

print("predictions")

for i in range(len(X)):
	print('inputs = ',X[i],'predicted = ',y_pred[i])
	

