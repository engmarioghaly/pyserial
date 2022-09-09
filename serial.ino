#define button1 3
#define button2 5
#define button3 11
#define button4 13

int stateOf1 , stateOf2 , stateOf3, stateOf4 ;  

void setup() {

pinMode (button1, INPUT) ; 
pinMode (button2 , INPUT ) ; 
pinMode (button3 , INPUT ) ; 
pinMode (button4 , INPUT ) ; 
Serial.begin(9600);
}

void loop() {

  stateOf1 = digitalRead (button1 ) ; 
  stateOf2 = digitalRead (button2 ) ; 
  stateOf3 = digitalRead (button3 ) ; 
  stateOf4 = digitalRead (button4 ) ; 

  if (stateOf1 == HIGH ) 
  {
    Serial.println ("1") ; 
  }
  
  if (stateOf2 == HIGH ) 
  {
    Serial.println ("2") ; 
  }
  
  if (stateOf3 == HIGH ) 
  {
    Serial.println ("3") ; 
  }
  
  if (stateOf4 == HIGH ) 
  {
    Serial.println ("4") ; 
  }
  
}
