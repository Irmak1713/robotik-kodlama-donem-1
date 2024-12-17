// C++ code 
//
void setup()
{
  pinMode(10,INPUT);
  pinMode(9,INPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}
void loop()
{
  /* BUTONLARDAN OKUNAN DEĞERLERİ DEĞİŞKENLERE AKTARMA*/
  int btn10 = digitalRead(10);
  int btn9 = digitalRead(9);
  
  /*BTN10 BUTONUNA BASILDIĞINDA PİN4 YAK*/
  if(btn10== 1){
  digitalWrite(4,1);
  delay(5000);
  }
  /*BTN9 BUTONUNA BASILDIĞINDA PİN3 YAK*/
  if(btn9 ==1){
   digitalWrite(3,1);
    delay(5000);
  }
  /*PİN3 VE PİN 4 SÖNDÜR*/
  digitalWrite(3,0);
  digitalWrite(4,0);
}
