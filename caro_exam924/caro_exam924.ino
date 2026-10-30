const int LEDA = 23;
const int LEDB = 22;
const int LEDC = 21;
const int LEDD = 19;
const int LEDE = 18;
const int LEDF = 5;
const int LEDG = 17;




void setup() {
  // put your setup code here, to run once:
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);
  pinMode(LEDE, OUTPUT);
  pinMode(LEDF, OUTPUT);
  pinMode(LEDG, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:\
  //display 9
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
  delay(1000);
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, LOW);
  delay(1000);

  //display 2
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDG, HIGH);
  delay(1000);
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDG, LOW);
  delay(1000);

  //display 4
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
  delay(1000);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, LOW);
  delay(1000);

}
