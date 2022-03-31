// 2022-03-31 Gleb Solomentsev
// First iteration of functioning launch button to begin Roast sequence (for now LED blink)
// including kill option (kill option works but seems a bit buggy, work this out)


const int ledPin =3;
const int butPin =13;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butPin, INPUT);
}

int butPinPrev = 0x0;//LOW
int butPinCurr = 0x0;//LOW
 
void loop()
{
  if (digitalRead(butPin)== HIGH){
    butPinCurr = HIGH;
  }
  if (digitalRead(butPin)== HIGH & butPinCurr == HIGH){
    butPinCurr = LOW;
  }

  if (butPinPrev == LOW & butPinCurr == HIGH) { 
    analogWrite(ledPin,80);
    delay(1000); // Wait for 1000 millisecond(s)
    analogWrite(ledPin, 10);
    delay(1000); // Wait for 1000 millisecond(s)digitalRead(butPin) == LOW)

  }
  
  else if (butPinPrev == HIGH & butPinCurr == LOW){
    analogWrite(ledPin, 10);
  }


}
