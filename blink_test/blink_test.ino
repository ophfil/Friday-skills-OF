/*
Ophir Filhart 1/27/2023, runing blink 
*/
// the setup function runs once when you press reset or power the board
void setup() {
 pinMode(12, OUTPUT);
pinMode (11, OUTPUT);
}

void loop() {
  
digitalWrite(12, HIGH);   
  delay(500);                      
  digitalWrite(12, LOW);   
  delay(500);       
  digitalWrite(11, HIGH);   
  delay(1000);                      
  digitalWrite(11, LOW);  
  delay(1000);                      
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
delay(10);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
}
