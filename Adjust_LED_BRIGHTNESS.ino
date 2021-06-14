

#define pot A0
#define LED 3

void setup() {
  
  Serial.begin(9600);
  

}

void loop() {
  
  
    int deger = analogRead(pot);
    deger= deger/4;  // "analogRead" get values from 0 to 1023 but "analogWrite" get values from 0 to 255. That's why we divide the value by 4.  
    analogWrite(LED,pot);
    int a = analogRead(pot);
    Serial.println(a);
    delay(300);  // We can wait 300 ms to see the values more easily.
    
 
  
  
  
}
