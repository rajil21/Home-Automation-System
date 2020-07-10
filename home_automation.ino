char state;
int flag = 0;
void setup() 
{
   Serial.begin(9600);
   pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   pinMode(13,OUTPUT);
}
void loop() 
{
   
                     
     
    if(Serial.available() > 0)
    {
      
      state = Serial.read();  // Reading Input From "Bluetooth Controller" app
      flag=0;
      for(int i=0;i<2;i++)
      {
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(50);                       // wait for a second
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
        delay(5
        0);
      } 
    }
    
    switch(state)
    {
      case 'A':digitalWrite(7,LOW);  // turn ON light1
              flag=1;
               break;
      case 'a':digitalWrite(7,HIGH);;  // turn OFF light1
               flag=1;
               break;
      case 'B':digitalWrite(8,LOW);;  // turn ON light2
               flag=1;
               break;
      case 'b':digitalWrite(8, HIGH);  // turn OFF light2
               flag=1;
               break;
      case 'C':digitalWrite(9, LOW);  // turn ON light3
               flag=1;
               break;
      case 'c':digitalWrite(9, HIGH);  // turn OFF light3
               flag=1;
               break;
      case 'D':digitalWrite(10,LOW); //turn ON light4
               flag=1;
               break;
      case 'd':digitalWrite(10,HIGH); //turn OFF light4
               flag=1;
               break;         
      case 'E':digitalWrite(7,HIGH);
               digitalWrite(8,HIGH);
               digitalWrite(9,HIGH);
               digitalWrite(10,HIGH);
               flag=1;
               break;                            
     }
}
