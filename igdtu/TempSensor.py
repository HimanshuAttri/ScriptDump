import RPi.GPIO as GP
import time
import Adafruit_DHT
import serial
sensor=Adafruit_DHT.DHT11

GP.setmode(GP.BCM)
port=serial.Serial("/dev/tty/AMA0",9600,timeout=3.0) #9600 bps , stream speed


dataPin=4

F= raw_input("Enter File Name: ")


while 1:
	h,t=Adafruit_DHT.read_retry(sensor,dataPin)
	
	if h is not None or t is not None:
		file=open(F,"a")
	
		print 'Temprature= {0:0.1f}*C Humidity= {1:0.1f}%'.format(t,h)

		port.write("Temperature:")
		port.write(str(t))
		port.write("Humidity")
		port.write(str(h))
	
	else :
		print "Data Not Value"8 
	
	time.sleep(1)
		
	
