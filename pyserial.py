import serial
import webbrowser

ser = serial.Serial("COM5", 9600)
while True:
        data = ser.read()
        if data == b'1':
            webbrowser.open("https://www.google.com.eg/")
        if data == b'2':
            webbrowser.open("https://www.youtube.com/")
        if data == b'3':
            webbrowser.open("https://www.facebook.com/")
        if data == b'4':
            webbrowser.open("https://twitter.com/")
