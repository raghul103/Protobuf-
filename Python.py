import serial
import time
import schedule

import Python_pb2 as Hi  
  
total_list = Hi.Data()

 
def main_func():  
  ser = serial.Serial('/dev/ttyACM0', 9600)
  content = ser.readline(1000)
  total_list.ParseFromString(content)
  print(total_list)
  
  ser.close()
  
schedule.every(5).seconds.do(main_func)

while True:
  schedule.run_pending()
  time.sleep(1)
  

