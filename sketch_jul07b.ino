//HOME SECURITY Detect the human presents in the room and
//  display the details in serial monitor using function ?  

void LED();
void LED()
{
  int b;
  b=analogRead(A2);
  Serial.print(b);
  if(b>300)
   {
    digitalWrite(10,HIGH);
    }
   else
   {
    digitalWrite(10,LOW);
    }
}
void setup() 
{
pinMode(10,OUTPUT); 
pinMode(A2,INPUT);
Serial.begin(9600);
}

void loop()
{
          
              LED(); 
           
}



