#include<Servo.h>   //In this project, servo will turn to a LDR have more light.
#define LDR1 A0
#define LDR2 A1
Servo servo;
int a=90;     //This works like a counter.  
void setup() {
  
  Serial.begin(9600);
  servo.attach(5);
  
  
 }

void loop(){
  Serial.print("A1:");   //In order to decide limits of LDRs, you can use serial port.
  Serial.println(analogRead(A1));
  delay(500);
  Serial.print("A0:");
  Serial.println(analogRead(A0));
  delay(500);
  
  
  
  if(analogRead(A0)>700 && analogRead(A1)<570){  /You can change numbers according to your LDR's values.
    while(a<160){    //This part is for slow rotation of the servo.
    
    servo.write(a);
    a++;
    delay(15);   
    
  } 6
    
  }
  if (analogRead(A1)>570 && analogRead(A0)<700){
    while(a>20){   //This part is for slow rotation of the servo, too.
    
    servo.write(a);
    a--;
    delay(15);   
    
  }
       
   
  }
  
  
      
}
