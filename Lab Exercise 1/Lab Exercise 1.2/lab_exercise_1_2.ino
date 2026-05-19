// C++ code
//

void setup()
{
  for (int i = 2; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
 
  for (int i = 2; i <= 10; i++) {

    digitalWrite(i, HIGH);
    digitalWrite(i + 1, HIGH);

    delay(500);

    digitalWrite(i, LOW);
    digitalWrite(i + 1, LOW);
  }

 
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

 
  for (int i = 10; i >= 2; i--) {

    digitalWrite(i, HIGH);
    digitalWrite(i + 1, HIGH);

    delay(500);

    digitalWrite(i, LOW);
    digitalWrite(i + 1, LOW);
  }
}