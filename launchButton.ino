// 2022-03-10 Gleb Solomentsev
// First iteration of funcitoning launch button to being Roast sequence (for now LED blink)
//

const int ledPin =6;
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
  
  if (butPinPrev == LOW & butPinCurr == HIGH){
    
    analogWrite(ledPin,80);
    delay(1000); // Wait for 1000 millisecond(s)
  	analogWrite(ledPin, 10);
  	delay(1000); // Wait for 1000 millisecond(s)digitalRead(butPin) == LOW){
  }

}
