float cf = 31.5;

int ffs1 = A0;

int ffsdata = 0;
float vout;
void setup()
{
  Serial.begin(9600);
  pinMode(ffs1, INPUT);
}

void loop()
{
  ffsdata = analogRead(ffs1);
  vout = (ffsdata * 5.0)/1023.0;
  vout = vout * cf ;
  Serial.print("Force sensor: ");
  Serial.print(vout,3);
  Serial.println("");
  delay(100);
}
