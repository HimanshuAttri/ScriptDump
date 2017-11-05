import picamera
import time
camera=picamera.PiCamera()
camera.brightness=70
camera.saturation=80
x=0
a=["1.h264","2.jpg", "3.h264","4.jpg","5.h264"]
while 1:
        if x%2==0:
		
		camera.start_recording(a[x])
		time.sleep(5)
        	camera.stop_recording()
        	
        else:
       		time.sleep(5)
        	camera.capture(a[x])
		camera.start_preview()
		
	x=x+1
	if x==5:
		break
		
	
	
	
	



