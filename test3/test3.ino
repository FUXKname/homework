#define analog0 0
#define led1 9
#define led2 10
#define led3 11
int analogvalue = 0;
const int buttonPin = 3;
int buttonState = 0;
int mode = 0;



void setup() 
 {
  pinMode(buttonPin,INPUT);
 }

void loop()
{
  analogvalue = analogRead(analog0) ;
  buttonState = digitalRead(buttonPin);

  
  if (buttonState == 0) 
      mode++;
  if (mode > 2)
      mode=0;
  if (mode == 0)
     {
       analogWrite(led1,analogvalue/4);
       digitalWrite(led3,LOW);
     }
  if (mode == 1)
     {
       analogWrite(led2,analogvalue/4);
       digitalWrite(led1,LOW);
     }
  if (mode == 2)
     {
       analogWrite(led3,analogvalue/4);
       digitalWrite(led2,LOW);
     }
     
  delay(200);
}
