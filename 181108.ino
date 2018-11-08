int led1 = 8; //cervena
int led2 = 9; //modra
int pinButton = 7; //tlacitko

void setup() {
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
}

void loop() {
  if(digitalRead(pinButton) == HIGH){
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH); 
  }else{
    digitalWrite(led2, HIGH); 
    digitalWrite(led1, LOW);
  }
}
