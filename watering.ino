
void setup() {
  Serial.begin(9600); 
  pinMode(7,OUTPUT); //繼電器的接腳
}

void loop() {
  delay(500);  //延遲時間（毫秒）
  int sensorValue = analogRead(A0); //read感測器接腳A0數值
  Serial.print(sensorValue); 
  
  if(sensorValue > 500)
  {
    digitalWrite(7,HIGH);   //如果太乾燥，啟動水泵，輸出高電位5V
    Serial.println(" 需要澆水！！！"); 
  }
  else 
  {
    digitalWrite(7,LOW);    //如果濕度夠，停止給水，輸出低電位0V
    Serial.println("  不用澆水"); 
  }
  
  
}
