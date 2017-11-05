/*
  For Loop Iteration

  Demonstrates the use of a for() loop.
  Lights multiple LEDs in sequence, then in reverse.

  The circuit:
  - LEDs from pins 2 through 7 to ground

  created 2006
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ForLoop
*/

//int timer = 50;           // The higher the number, the slower the timing.
//int tid = 10;
void setup() {
  // use a for loop to initialize each pin as an output:
 
    pinMode(13, OUTPUT);
    
    
  
}

void loop() {
  int x = 5;
  // loop from the lowest pin to the highest:
  for (int timer = 10; timer < 100; timer = timer + x) { //  for (int timer = 10; timer < 100; timer++) { //uden variabel
    // turn the pin on:
    digitalWrite(13, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(13, LOW);
    delay(timer);
  }
  
  
    for (int timer = 99; timer >= 10; timer = timer - x){ //  for (int timer = 10; timer < 100; timer--) { //uden variabel
      
     // turn the pin on:
    digitalWrite(13, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(13, LOW);
    delay(timer);
    
    }
    
   // tid = tid++;
    
 // if(timer = 200)
 // {
  
 // }
    
  }

  // loop from the highest pin to the lowest:
  //for (int thisPin = 7; thisPin >= 2; thisPin--) {
    // turn the pin on:
 //   digitalWrite(thisPin, HIGH);
   // delay(timer);
    // turn the pin off:
    //digitalWrite(thisPin, LOW);
 // }

