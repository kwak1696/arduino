

int GroundPin= A0;
int sensePin= 1;
int LED=13;
int x;
int normalvalue= 10;
int threshold= 50;


void setup()
{
pinMode(LED, OUTPUT);
x=0;
}

void loop()
{
int value= analogRead(sensePin);
if (value > normalvalue + threshold)
{
  x++;
  delay(100);
}
if(x%2==0)digitalWrite(LED,LOW);
if(x%2==1)digitalWrite(LED,HIGH);

}



