/*
  S.O.S
*/

//Pin 10 has an LED connected.
int ledPin = 10;

// the setup routine runs once
void setup()
{
  //initalize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  
}

// the loop routine runs over and voer again forever:
void loop()
{
  // 3 dots
  for (int x=0; x<3; x++) {
   digitalWrite(ledPin, HIGH);
   delay(150);
   digitalWrite (ledPin, LOW);
   delay (100);   
}  
  //dealy 100 ms
  delay(100);
  //3 daishs
  for (int x=0; x<3; x++) {
   digitalWrite(ledPin, HIGH);
   delay(400);
   digitalWrite (ledPin, LOW);
   delay (100);      
}

  //dealy 100 ms
  delay(100);
  //3 dots
  for (int x=0; x<3; x++) {
   digitalWrite(ledPin, HIGH);
   delay(150);
   digitalWrite (ledPin, LOW);
   delay (100);     
  }
  
 //delay 5 s before send S.O.S again
 delay(5000); 
  
}

