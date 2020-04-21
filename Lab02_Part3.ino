int i;
boolean val;
const byte led[] = {13, 12, 11, 10, 9, 8, 7, 6};
const byte sw = 4;

void setup() {
  for(i=0;i<8;i++) {
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i],LOW);
  }
  pinMode(sw, INPUT);
}

void loop() {
  val = digitalRead(sw);
  if(val) {
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
  else {
    for(i=0;i<8;i++) {
      digitalWrite(led[i],HIGH);
      delay(300);
      digitalWrite(led[i],LOW);
    }
    delay(1000);
    for(i=7;i>=0;i--) {
      digitalWrite(led[i],HIGH);
      delay(300);
      digitalWrite(led[i],LOW);
    }
  }
}
