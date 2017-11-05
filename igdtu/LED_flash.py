from Tkinter import *
import time
import RPi.GPIO as GPIO

ledpin=4
GPIO.setmode(GPIO.BCM)
GPIO.setup(ledpin,GPIO.OUT)


def on():
	while 1:
		time.sleep(.75)
		GPIO.output(ledpin,GPIO.HIGH)
		time.sleep(.25)
		GPIO.output(ledpin,GPIO.LOW)
def off():
	GPIO.output(ledpin,GPIO.LOW)
	button2=Button(text="OFF", command="off")

button1=Button(text="ON", command="on")
button1.pack()

button2=Button(text="OFF", command="off")
button2.pack()

pk=Tk()
pk.mainloop()
GPIO.cleanup()

