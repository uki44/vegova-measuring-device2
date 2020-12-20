//code made by Uroš Tomažič


void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);

}

void loop() {

if(digitalRead(6)==1){
  digitalWrite(5,HIGH);
}
if(digitalRead(7)==1){
  digitalWrite(5,LOW);
}
 /* digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);*/
  
}
