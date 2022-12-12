#include "hello.pb.h" 
#include "pb_common.h"
#include "pb.h"
#include "pb_encode.h"
#include"string.h"
uint8_t buffer[128];
 
void setup() {
 
  Serial.begin(9600);
 
  Data message = Data_init_zero;
  
  pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));
 
  message.Temp = 25.06;
  message.count = 3;
  message.flag = 1;
 
  bool status = pb_encode(&stream, Data_fields, &message);
 
  if (!status)
  {
      Serial.println("Failed to encode");
      return;
  }

  
  for(uint8_t i = 0; i<stream.bytes_written; i++){
    
    Serial.print(String(buffer[i]));
  }
}
 
void loop() {
 
}
