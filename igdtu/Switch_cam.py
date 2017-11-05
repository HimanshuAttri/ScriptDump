import picamera
import time
import RPi.GPIO as X
switch=4
X.setmode(X.BCM)
X.setup(switch,X.IN)
#camera=picamera.PiCamera()
while 1:
	print X.input(switch) 
	time.sleep(5)
	if X.input(switch): 
		#camera.start_preview()
		#camera.capture("switch.jpg")
		print "out" ,X.input(switch)
		break
	




