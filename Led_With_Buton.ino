#define Buton 9  /// We make the definitions.
#define Led 8
int result =0;  /// We created a variable to see if button was pressed.

void setup() {
  pinMode(Buton, INPUT);
  pinMode(Led,OUTPUT);
  

}

void loop() {
  result = digitalRead(Buton);
  if (result ==1){
    
    digitalWrite(Led,HIGH);
                                    /// Our led will flash when the button is pressed.
  }
  else{
    digitalWrite(Led,LOW);
  }
  
  
  
  
}
