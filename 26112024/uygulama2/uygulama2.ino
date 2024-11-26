// C++ code
//
int ak=2;
int as=3;
int ay=4;
int yk=6;
int yy=5;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  digitalWrite(ak, HIGH);
  digitalWrite(as, LOW);
  digitalWrite(ay, LOW);
  digitalWrite(yk,0 );
  digitalWrite(yy,  1);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(ak, 0);
  digitalWrite(as, 1);
  digitalWrite(ay, LOW);
  digitalWrite(yk, LOW);
  digitalWrite(yy,  1);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(ak, 0);
  digitalWrite(as, 0);
  digitalWrite(ay, 1);
  digitalWrite(yk, 1);
  digitalWrite(yy,  0);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(ak, 0);
  digitalWrite(as, 1);
  digitalWrite(ay, 0);
  digitalWrite(yk, 1);
  digitalWrite(yy,  0);
  delay(3000); // Wait for 3000 millisecond(s)
  
}
