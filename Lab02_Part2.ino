int i;
const byte led[] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  for(i=0;i<8;i++) {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i],LOW);
  }
}

void loop() {
  for(i=0;i<8;i++) {
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],LOW);
  }
  delay(500);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],LOW);
  }
  delay(1000);
    for(i=0;i<8;i++) {
    digitalWrite(led[i],HIGH);
    delay(300);
    digitalWrite(led[i],LOW);
  }
  delay(1000);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],LOW);
  }
  delay(500);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(i=0;i<8;i++) {
    digitalWrite(led[i],LOW);
  }
  delay(1000);
  for(i=7;i>=0;i--) {
    digitalWrite(led[i],HIGH);
    delay(300);
    digitalWrite(led[i],LOW);
  }
  delay(1000);
}
