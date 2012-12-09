/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 */
 
int led = 1;           // the pin that the LED is attached to
int pot = 1; 

int analog = 0 ;
// the setup routine runs once when you press reset:
void setup()  { 
    // declare pin 9 to be an output:
    pinMode(led, OUTPUT);
    pinMode(pot, INPUT);
    
    delay(300);
    for(int i=0;i<=255;i++){
        delay(50);
        analogWrite(led,i);
    }
    for(int i=255;i>=0;i--){
        delay(50);
        analogWrite(led,i);
    }
    delay(300);
} 

// the loop routine runs over and over again forever:
void loop()  { 
    analog = analogRead(pot);
    analog = map(analog, 0, 1023, 1, 255);

    analogWrite(led, analog);    

    delay(30);                            
}



