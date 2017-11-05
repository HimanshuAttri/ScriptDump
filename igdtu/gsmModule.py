import serial 
import time 
import RPi.GPIO as GPIO 
port = serial.Serial("/dev/ttyAMA0", 9600, timeout=3.0) 
try: 
	print"GSM 300\n" 
	print"List of operating Commands" 
	print"Commands		functions" 
	print"AT	to check operations" 
	port.write('AT\r\n')		
	rcv = port.read(20) 
	print"GSM" + rcv
	while True: 
		rcv = port.read(20) 
		print rcv
		time.sleep(2) 
		keyin = raw_input("Want to call ? press y else n") 
		if keyin== "y": 
			keyin = raw_input("Dial Number: ") 
			print keyin
			keyin2 = 'ATD '+keyin+';\r\n' 
			print"Dialing : " + keyin2 
			port.write(keyin2)
		x=1 
		for x in range(0,9): 
			rcv= port.read(50) 
			print rcv
			x+=1 
		else : 
			if keyin == "n": 
				rcv= port.read(50) 
				print rcv
				time.sleep(2) 
			if rcv=='RING':			
				print 'ring' 
				port.write('ATH \r\n') 
except: 
	port.close() 

