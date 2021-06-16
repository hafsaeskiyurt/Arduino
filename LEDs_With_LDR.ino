#define LED1 9
#define LED2 10
#define LED3 11
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);   // I used serial port to decide the values.
 }

void loop() {
  int light= analogRead(A0);
  Serial.println(light);
  delay(500);

    if(light>600){    // As long as this condition is true, 3 LEDs will light up at the same time.
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
    }
    if (light<600 && light>200){    // As long as this condition is true, 2 LEDs will light up at the same time.
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,LOW);
      
    }
    if (light<200){               // As long as this condition is true, 1 LED will light up at the same time.
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,LOW);
      
    }
      
}
