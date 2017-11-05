import picamera
import time
nb=picamera.PiCamera()
nb.start_recording("vid1.h264")
time.sleep(15)
nb.stop_recording()



