
void setup() {
  pinMode(8, OUTPUT);     // Set the pins as output, you can change pin numbers.
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);
  

}

void loop() {
  digitalWrite(8,HIGH);   
  delay(3000);            // In this part, red LED will flash for 3 seconds.
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(2000);           // In this part, yellow LED will flash for 2 seconds.
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(3500);           // In this part, green LED will flash for 3,5 seconds.
  digitalWrite(10,LOW);
  
  
  
  
}
