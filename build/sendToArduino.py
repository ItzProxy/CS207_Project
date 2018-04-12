#webserver needs to be built first...
#get json request from webserver 
#send it over serial to the arduino
import serial

ser = serial.Serial('COM3', 9600)

while True:
    print(ser.readline())