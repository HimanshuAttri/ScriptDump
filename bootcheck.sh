#!/bin/bash

#FOREVER LOOP
#Warning try at your own risk
#script to boot only if your machine address matches with the given mac address
#no machine other then your machine will be able to complete the os boot
#replace xx:xx:xx:xx:xx with machine's address make sure cat /sys/class/net/wlan0/address gives the same output
#finally add the script to crontab 
 if [ "xx:xx:xx:xx:xx" -ne  $(cat /sys/class/net/wlan0/address) ]
 then
#Boot loop if machine mac address donot match with specified mac 
    sudo reboot now 
 fi
    

