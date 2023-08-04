// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
   pinMode(10,INPUT_PULLUP);

}

void loop()
{
  int button=digitalRead(10);
  if (button==0){
    analogWrite(5,250);
    analogWrite(6,10);
    analogWrite(9,50);
  }
   
  else{
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);
  }
   
    
}