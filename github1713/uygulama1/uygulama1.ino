// C++ code
//
int kirmizi=2;
int beyaz=3;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(beyaz, OUTPUT);
}

void loop()
{
  digitalWrite(kirmizi, HIGH);
  digitalWrite(beyaz, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(kirmizi, LOW);
  digitalWrite(beyaz, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
