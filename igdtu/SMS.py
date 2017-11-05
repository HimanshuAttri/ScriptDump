import serial
import time 

port= serial.Serial("/dev/ttyAMA0",9600,timeout=3.0)
try:
	print "SMS Service"
	msg1=raw_input("Enter : ")
	number=raw_input("Enter mobile number : ")
	port.write('AT+CMS="'+number+'"\r\n')
	time.sleep(1)
	port.flushInput()
	port.flushOutput()
	port.write(msg1)
	time.sleep(1)
	port.write('\x1A\r\n')
	print port.read(50)
	port.flushInput()
	port.flushOutput()
except:
	port.close()
