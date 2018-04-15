#webserver needs to be built first...
#get json request from webserver 
#send it over serial to the arduino
import serial
import json
import time
import random
from threading import Thread

maxled = 32

def main():
    line = []
    #somelist = [[3,255,0,0],[1,0,255,0],[0,0,255,0],[5,0,255,0]]
    somelist = [[counter,random.randint(0,255),random.randint(0,255),random.randint(0,255)] for counter,_ in enumerate(range(maxled))]
    #somelist = [[counter,random.randint(0,128),0,0] for counter,_ in enumerate(range(maxled))]
    ser = serial.Serial('COM3', 115200) #baud rate of 115200
    while(ser.inWaiting() > 0):
        if(ser.readline().contains("READY")):
            break
    for i,z in enumerate(somelist):
        t = ' '.join('<{0}>'.format(w) for w in z)
        print(t)
        ser.write(t.encode())
        while(i%16 == 0):
            time.sleep(0.5)
        #ser.flush()
    while(ser.inWaiting() > 0):
        print(ser.readline())

if __name__ == "__main__":
    #thread = Thread(target=main)
    #thread.start()
    main()