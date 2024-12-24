void setup() {
  
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);



}

void loop() {
 
  String girilen-deger="";
  if(Serial.available()) {
    girilen_deger= Serial.readString();
    Serial.print("girilen deger: ");
    Serial.println(girilen_deger);

    if (girilen_deger=="blue"){
      digitalWrite(3,1);
      delay(3000);
      digitalWrite(3,0);
      
      }

      if (girilen_deger=="yellow"){
        dijitalWrite(4,1);
        delay(300);
        digitalWrite(4,0);
        
        
        }
    }
  
  
 

}
