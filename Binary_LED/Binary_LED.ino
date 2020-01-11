
void setup(){
  int b[4]={13,12,11,10};
  for(int i=0;i<=3;i++)
  {
    pinMode(b[i],OUTPUT);
  }
  Serial.begin(9600);
}
void loop()
{
  int x,a;
  Serial.print("Enter an integer");
  x=Serial.read();
  int c[4]={0,0,0,0};
  for(int i=0;x>0;i++)
  {
    a=x%2;
    x=x/2;
    c[i]=a;
    
  }
  for(int i=0;i<=3;i++)
  {
    if(c[i])
    digitalWrite(10+i,HIGH);
    Serial.print(c[i]);
  }
  delay(36000);
}
