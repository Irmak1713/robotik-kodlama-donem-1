int sari = 3;
int mavi = 4;
String girilen ="";


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(sari,OUTPUT);
 pinMode(mavi,OUTPUT);
 Serial.print("sari icin s mavi için m bas = ");
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()){
  girilen=Serial.readString();
  Serial.print("sari icin s mavi m bas= ");
  Serial.println(girilen);
  if(girilen=="s"){
  
  Serial.println("sarı yandı");
  digitalWrite(sari,1);
  delay(3000);
  digitalWrite(sari,0);
    }
  if(girilen=="m"){
    
  Serial.println("mavi yandı");
  digitalWrite(mavi,1);
  delay(3000);
  digitalWrite(mavi,0);

  if(girilen=="i"){
    digitalWrite(sari,1);
    digitalWrite(mavi,1);
    delay(1000);
    digitalWrite(sari,0);
    digitalWrite(mavi,0);
    
  }
    }
  }
}
