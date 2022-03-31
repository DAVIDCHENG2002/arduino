int leda = 5;
int ledb = 4;
int ledc = 8;
int ledd = 9;
int lede = 10;
int ledg = 7;
int ledf = 6;
int delayWait = 1000;
int ledB=0;
int ledA=1;
int ledF=2;
int ledG=3;
int ledC=11;
int ledD=12;
int ledE=13;
int i=0;
int n=0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(leda, OUTPUT);
  pinMode(ledb, OUTPUT);
  pinMode(ledc, OUTPUT);
  pinMode(ledd, OUTPUT);
  pinMode(lede, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledf, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledF, OUTPUT);
}


 void loop ()
{
  for(i=0;i<=59;i++){
	one();
  	two();
  	three();
  	four();
    five();
	six();
  	seven();
  	eight();
  	nine();
  	zero();
    n=n+1;
    switch(n)
    {
    case 1:
    digitalWrite(ledB, HIGH);
  	digitalWrite(ledC, HIGH);
      
  	break;
    case 2:
      
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledC, LOW);
    digitalWrite(ledA, HIGH);
  	digitalWrite(ledB, HIGH);
  	digitalWrite(ledD, HIGH);
  	digitalWrite(ledE, HIGH);
  	digitalWrite(ledG, HIGH);
  	break;
  	
      case 3:
    digitalWrite(ledA, LOW);
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledD, LOW);
  	digitalWrite(ledE, LOW);
  	digitalWrite(ledG, LOW);
    digitalWrite(ledA, HIGH);
  	digitalWrite(ledB, HIGH);
  	digitalWrite(ledC, HIGH);
  	digitalWrite(ledD, HIGH);
  	digitalWrite(ledG, HIGH);
break;
      case 4:
    digitalWrite(ledA, LOW);
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledC, LOW);
  	digitalWrite(ledD, LOW);
  	digitalWrite(ledG, LOW);
    digitalWrite(ledB, HIGH);
  	digitalWrite(ledC, HIGH);
  	digitalWrite(ledF, HIGH);
  	digitalWrite(ledG, HIGH);
  	  	
break;
      case 5:
      
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledC, LOW);
  	digitalWrite(ledF, LOW);
  	digitalWrite(ledG, LOW);
    digitalWrite(ledA, HIGH);
  	digitalWrite(ledF, HIGH);
  	digitalWrite(ledG, HIGH);
  	digitalWrite(ledC, HIGH);
  	digitalWrite(ledD, HIGH);
  
  
      break;
    }
     
          
  }
   
}

void one()
{
	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	delay(delayWait);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	
}

void two()
{
	digitalWrite(leda, HIGH);
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledd, HIGH);
  	digitalWrite(lede, HIGH);
  	digitalWrite(ledg, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledd, LOW);
  	digitalWrite(lede, LOW);
  	digitalWrite(ledg, LOW);
  	
}
void three()
{
 	digitalWrite(leda, HIGH);
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledd, HIGH);
  	digitalWrite(ledg, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledd, LOW);
  	digitalWrite(ledg, LOW);
  	
}
void four()
{
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledf, HIGH);
  	digitalWrite(ledg, HIGH);
  	delay(delayWait);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledf, LOW);
  	digitalWrite(ledg, LOW);
  
}
void five()
{
  	digitalWrite(leda, HIGH);
  	digitalWrite(ledf, HIGH);
  	digitalWrite(ledg, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledd, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledf, LOW);
  	digitalWrite(ledg, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledd, LOW);
  	
}
void six()
{
  	digitalWrite(leda, HIGH);
  	digitalWrite(ledf, HIGH);
  	digitalWrite(ledg, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledd, HIGH);
  	digitalWrite(lede, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledf, LOW);
  	digitalWrite(ledg, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledd, LOW);
  	digitalWrite(lede, LOW);
  	
}
void seven()
{
  	digitalWrite(leda, HIGH);
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	
}
void eight()
{
  	digitalWrite(leda, HIGH);
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledd, HIGH);
  	digitalWrite(lede, HIGH);
  	digitalWrite(ledf, HIGH);  
  	digitalWrite(ledg, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledd, LOW);
  	digitalWrite(lede, LOW);
  	digitalWrite(ledf, LOW);  
  	digitalWrite(ledg, LOW); 
  	
}
void nine()
{
  	digitalWrite(leda, HIGH);
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledf, HIGH);  
  	digitalWrite(ledg, HIGH);
  digitalWrite(ledd, HIGH);
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledf, LOW);  
  	digitalWrite(ledg, LOW); 
  	digitalWrite(ledd, LOW); 
}
void zero()
{
  	digitalWrite(leda, HIGH);
  	digitalWrite(ledb, HIGH);
  	digitalWrite(ledc, HIGH);
  	digitalWrite(ledd, HIGH);
  	digitalWrite(lede, HIGH);
  	digitalWrite(ledf, HIGH);  
  	delay(delayWait);
  	digitalWrite(leda, LOW);
  	digitalWrite(ledb, LOW);
  	digitalWrite(ledc, LOW);
  	digitalWrite(ledd, LOW);
  	digitalWrite(lede, LOW);
  	digitalWrite(ledf, LOW);  
  	
}
void ten()
{
    digitalWrite(ledB, HIGH);
  	digitalWrite(ledC, HIGH);
  	delay(delayWait);
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledC, LOW);
}
/*void twenty()
{
    digitalWrite(ledA, HIGH);
  	digitalWrite(ledB, HIGH);
  	digitalWrite(ledD, HIGH);
  	digitalWrite(ledE, HIGH);
  	digitalWrite(ledG, HIGH);
  	delay(delayWait);
  	digitalWrite(ledA, LOW);
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledD, LOW);
  	digitalWrite(ledE, LOW);
  	digitalWrite(ledG, LOW);
  	
}
  
void thirty()
{
 	digitalWrite(ledA, HIGH);
  	digitalWrite(ledB, HIGH);
  	digitalWrite(ledC, HIGH);
  	digitalWrite(ledD, HIGH);
  	digitalWrite(ledG, HIGH);
  	delay(delayWait);
  	digitalWrite(ledA, LOW);
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledC, LOW);
  	digitalWrite(ledD, LOW);
  	digitalWrite(ledG, LOW);

}
void forty()
{
    digitalWrite(ledB, HIGH);
  	digitalWrite(ledC, HIGH);
  	digitalWrite(ledF, HIGH);
  	digitalWrite(ledG, HIGH);
  	delay(delayWait);
  	digitalWrite(ledB, LOW);
  	digitalWrite(ledC, LOW);
  	digitalWrite(ledF, LOW);
  	digitalWrite(ledG, LOW);
  
}
  
void fifty()
{
    digitalWrite(ledA, HIGH);
  	digitalWrite(ledF, HIGH);
  	digitalWrite(ledG, HIGH);
  	digitalWrite(ledC, HIGH);
  	digitalWrite(ledD, HIGH);
  	delay(delayWait);
  	digitalWrite(ledA, LOW);
  	digitalWrite(ledF, LOW);
  	digitalWrite(ledG, LOW);
  	digitalWrite(ledC, LOW);
  	digitalWrite(ledD, LOW);
  	


}*/
