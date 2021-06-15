#define pot A0
int LEDs []={3,5,11,9,10}; // You can create an array to use LEDs easily.
void setup() {
  pinMode(pot,INPUT);
  Serial.begin(9600);
  
  
  for(int i=0; i<5; i++){  //You can change numbers according to numbers of your LEDs.
    pinMode(LEDs[i],OUTPUT);    
   }
    
}

void loop() {
  int value = analogRead(pot);
  value =(map(value,0,1023,0,1000))+1000; //When the potentiometer is 0, the time between the LEDs should be 1 second. When the potentiometer is 1023, the time between the LEDs should be 2 seconds. So we added 1000. 
  Serial.println(value);
  
  for (int i=0; i<5; i++){
    digitalWrite(LEDs[i], HIGH);
    delay(value);
    digitalWrite(LEDs[i], LOW);
  }

  for (int j= 4; j>-1; j--){    // We wrote these codes for the LEDs to flash backwards.
    digitalWrite(LEDs[j], HIGH);
    delay(value);
    digitalWrite(LEDs[j], LOW);
  }
  
  
}
