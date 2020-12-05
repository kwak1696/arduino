
int GroundPin= A0;
int sensePin= 1;
int LED=13;

int normalReading= 0;
int threshold= 0;

int calibrate()
{
int n= 5;
long total=0;
for (int i=0; i<n;i++)
 {
total= total + analogRead(sensePin);
delay(10);
}
return total/n;
}

void setup()
{
pinMode(GroundPin, OUTPUT);
digitalWrite(GroundPin, LOW);
pinMode(LED, OUTPUT);
normalReading= calibrate(); 
}

void loop()
{
int reading= analogRead(sensePin);
if (reading > normalReading + threshold)
{
  digitalWrite(LED, HIGH);
}
else
{
  digitalWrite(LED, LOW);  
}
}
