int pins[9]={2,3,4,5,6,7,8,9,10};
void setup() {
  Serial.begin(9600);
for (int i=0;i <=8;i++)
{
 pinMode(pins[i], OUTPUT);
 Serial.print("i ");
 Serial.print(i);
 Serial.print(" pin ");
 Serial.println(pins[i]);

}
}
void loop() {
  for (int i=0;i<8;i++)
  {
     digitalWrite(pins[i],HIGH);
     delay(2000);
  }
  for (int i=0;i<8;i++)
  {
     digitalWrite(pins[i],LOW);
     delay(2000);
  }

  }


