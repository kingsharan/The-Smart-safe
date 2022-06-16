//secret code is press, right, up, right, press 
#include <Servo.h>
Servo servo1 ;
int VRx = A0; // Joystick x
int VRy = A1;// Joystick y
int SW = 2;// Joystick sw
int xPosition = 0;
int yPosition = 0;
int sw = 0;
int mapX = 0;
int mapY = 0;
void setup() {

servo1.attach(8); 
 
  Serial.begin(9600);

servo1.write(90); 
delay(500);
  
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP); 
}

void loop() {
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  sw = digitalRead(SW);

  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.print(yPosition);
  Serial.print(" | Button: ");
  Serial.println(sw);

  delay(100);
  
if (sw == 0){

  Serial.println("First complete");
  delay(1000);  
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  delay(500);
  
    if (xPosition > 900){
      
      Serial.println("second complete")  ; 
      delay(1000);
      xPosition = analogRead(VRx);
      yPosition = analogRead(VRy);
      delay(100);
      
        if (yPosition > 900){
          
          Serial.println("third complete"); 
          delay(1000);
          xPosition = analogRead(VRx);
          yPosition = analogRead(VRy);
          delay(100);  
          
            if (xPosition > 900){
              
              Serial.println("fourth complete");
              delay(1000); 
              xPosition = analogRead(VRx);
              yPosition = analogRead(VRy);
              delay(100);
                
                if (sw == 0){
                  delay(1000);
                  Serial.println("completeD AND SUCCESSFUL");
                  servo1.write(0); 
                  delay(8000);
                  servo1.write(90); 
                  
  }
    }
  }
  }
     }
}
