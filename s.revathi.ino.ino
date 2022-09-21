int t=2;

int e=3;


void setup()

{
  
Serial.begin(9600);
  
pinMode(t,OUTPUT);
  
pinMode(e,INPUT);
  
pinMode(12,OUTPUT);

}


void loop()

{
  
//ultraSonic sensor
  
digitalWrite(t,LOW);
  
digitalWrite(t,HIGH);
  
delayMicroseconds(10);
  
digitalWrite(t,LOW);
  
float dur=pulseIn(e,HIGH);
  
float dis=(dur*0.0343)/2;
  
serial.print("Distance is: ");
  
serial.printIn(dis);
  
 
 //LED ON
 
 if(dis>=100)
  
{
    
digitalWrite(8,HIGH);
    
digitalWrite(7,HIGH);
  
}
  
  
//Buzzer for ultrasonic sensor
  
if(dis>=100)
  
{
    
for(int i=0;i<=30000;i=i+10)
    
{
      
tone(12,i);
      
delay(1000);
      
noTone(12);
      
delay(1000);
    
}
  
}
  
  
  
  
  
//Temperate sensor
  
double a=analogRead(A0);
  
double t=(((a/1024)*5)-0.5)*100;
  
serial.print("Tempvalue:");
  
serial.printIn(t);
  
delay(1000);
  
  
  
//LED ON
  
if(t>=100)
  
{
    
digitalWrite(8,HIGH);
    
digitalWrite(7,HIGH);
  
}
  
  
//Buzzer for temperature sensor
  
if(t>=100
     
{
       
for(int i=0;i<=30000;i=i+10)
      
 {
         
tone(12,i);
         
delay(1000);
         
noTone(12);
         
delay(1000);
      
 }
     
}
     
//LED OFF
     
if(t<100)
     
{
       
digitalWrite(8,LOW);
       
digitalWrite(7,LOW);
     
}
     
}    
  
  
   
          
  