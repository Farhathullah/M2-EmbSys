#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
LiquidCrystallcd(8,9,10,11,12,13);
TinyGPSPlusgps;
SoftwareSerialss(2,3);
#define alarm 4
int x=A0;
int y=A1;
int z=A2;
intxvalue,yvalue,zvalue;
int a=0,b=0,c=0,d=0;
voidgps_loc();
voidgsm_init();
voidmsg();

int in = 5;
int Reset=6;
int start=7;
int count=0,i=0,k=0,rate=0;

unsigned long time2,time1;
unsigned long time;

byte heart[8] = 
{
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};
void setup()
{
lcd.begin(16, 2);
Serial.begin(9600);
ss.begin(9600);
pinMode(in, INPUT);
pinMode(Reset, INPUT);
pinMode(alarm, INPUT);
pinMode(start, INPUT);
digitalWrite(Reset, HIGH);
digitalWrite(start, HIGH);
digitalWrite(alarm, LOW);
lcd.setCursor(0,0);
lcd.print("SMART PARAOXYSM ");
lcd.setCursor(0,1);
lcd.print("PREDICTION SYSTEM");
delay(1000);delay(1000);delay(1000);
lcd.clear();
}

void loop()
{
gps_loc();
xvalue=analogRead(x);
yvalue=analogRead(y);
zvalue=analogRead(z);
lcd.setCursor(0,0);
lcd.print(xvalue);
lcd.print("  ");
lcd.setCursor(5,0);
lcd.print(yvalue);
lcd.print("  ");
lcd.setCursor(10,0);
lcd.print(zvalue);
lcd.print("  ");
if((digitalRead(start)))
  {
    k=0;
    //lcd.clear();
    //lcd.print("Please wait.......");
while(k<5)
    {
if(digitalRead(in))
     {
if(k==0)
      time1=millis();
k++;
while(digitalRead(in));
     }
    }
      time2=millis();
rate=time2-time1;
rate=rate/5;
rate=60000/rate;
if(rate>120){  msg1();}
     // rate=rate-25;

lcd.setCursor(0,1);
lcd.print("HB:");
lcd.setCursor(3,1);
lcd.print(rate);
Serial.println(rate);
      //lcd.print(" ");
      //lcd.write(1);      
      k=0;
rate=0;
    }

if(xvalue<280)
     {
if(a==1)
      {

lcd.setCursor(15,0);
lcd.print("F");
lcd.setCursor(0,1);
lcd.print("FRONT SIDE    ");
msg();
         //Serial.println("front"); 
         a=0;
     }
    }
else
    {
      a=1;
      //Serial.println("normal");
lcd.setCursor(15,0);
lcd.print("N");


    }
if(yvalue<280)
     {
if(b==1)
      {

lcd.setCursor(15,0);
lcd.print("L");
lcd.setCursor(0,1);
lcd.print("LEFT SIDE    ");
msg();
         //Serial.println("left");
         b=0;
     }
    }
else
    {
      b=1;
      //Serial.println("normal");
lcd.setCursor(15,0);
lcd.print("N");

    }
if(zvalue<380)
     {
if(c==1)
      {

lcd.setCursor(15,0);
lcd.print("R");
lcd.setCursor(0,1);
lcd.print("RIGHT SIDE     ");
msg();

        c=0;
     }
   }
else
   {
    c=1;
lcd.setCursor(15,0);
lcd.print("N");
    //Serial.println("normal");

   }
}

voidgsm_init()
{
lcd.setCursor(0,0);
lcd.print("MSG SENDING.....");
Serial.println("AT");
delay(1000);  
Serial.println("ATE0");
delay(1000); 
Serial.println("AT+CPIN?");
delay(1000); 
Serial.println("AT+CNMI=2,2,0,0,0");
delay(1000);
Serial.println("AT+CMGF=1");

}

voidmsg()
{
digitalWrite(alarm, HIGH);
gsm_init();
lcd.setCursor(0,0);
lcd.print("9384269220");
Serial.println("AT+CMGS=\"9384269220\"");
       //Serial.println("\"");
delay(1000);             
Serial.println("HEALTH ABNORMAL LOCATION:");
Serial.print("google.com/maps/?q="); 
Serial.print(gps.location.lat(), 6);      
Serial.print(",");
Serial.println(gps.location.lng(), 6);
       ///////////////////////////////////////
delay(500);
Serial.println((char)26);     
delay(3000);  
delay(1000);
lcd.clear();   
digitalWrite(alarm, LOW); 
}
voidgps_loc()
{
while (ss.available() > 0)
  {
gps.encode(ss.read());
if (gps.location.isUpdated())
    {      
      ;
    }
  }
}
void msg1()
{
gsm_init();
lcd.setCursor(0,0);
lcd.print("9384269220");
Serial.print("AT+CMGS=\"9384269220");
Serial.println("\"");
delay(1000); 
Serial.println("HEARTBEAT ABNORMAL");            
Serial.println("LOCATION IS:");
Serial.print("google.com/maps/?q="); 
Serial.print(gps.location.lat(), 6);      
Serial.print(",");
Serial.println(gps.location.lng(), 6);
       ///////////////////////////////////////
delay(500);
Serial.println((char)26);     
delay(3000);  
delay(1000);
lcd.clear();    
}

