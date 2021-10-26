int Pot1 = A0; int Pot2 = A1; int Pot3 = A2; int Pot4 = A3;

int value1, value2, value3, value4 = 0;
int MA1 = 9, MA2 = 8, MB1 = 7, MB2 = 6, MC1 = 5, MC2 = 4, MD1 = 3, MD2 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(MA1, OUTPUT);
  pinMode(MA2, OUTPUT);
  
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);
  
  pinMode(MC1, OUTPUT);
  pinMode(MC2, OUTPUT);
  
  pinMode(MD1, OUTPUT);
  pinMode(MD2, OUTPUT);

  pinMode(Pot1, INPUT);
  pinMode(Pot2, INPUT);
  pinMode(Pot3, INPUT);
  pinMode(Pot4, INPUT);

}

void loop() {

  value1 = analogRead(Pot1);
  value2 = analogRead(Pot2);
  value3 = analogRead(Pot3);
  value4 = analogRead(Pot4);

  Serial.println(String(value1) + "      "  +
                 String(value2) + "      " +
                 String(value3) + "       " +
                 String(value4));

  if (value1 > 800) {
    digitalWrite(MA1, HIGH); digitalWrite(MA2, LOW);
  }
  else if (value1 < 200) {
    digitalWrite(MA2, HIGH); digitalWrite(MA1, LOW);
  }
  else
  {
    digitalWrite(MA2, LOW); digitalWrite(MA1, LOW);
  }

  if (value2 > 800) {
    digitalWrite(MB1, HIGH); digitalWrite(MB2, LOW);
  }
  else if (value2 < 200) {
    digitalWrite(MB2, HIGH); digitalWrite(MB1, LOW);
  }
  else
  {
    digitalWrite(MB2, LOW); digitalWrite(MB1, LOW);
  }

  if (value3 > 800) {
    digitalWrite(MC1, HIGH); digitalWrite(MC2, LOW);
  }
  else if (value3 < 200) {
    digitalWrite(MC2, HIGH); digitalWrite(MC1, LOW);
  }
  else
  {
    digitalWrite(MC2, LOW); digitalWrite(MC1, LOW);
  }

  if (value4 > 800) {
    digitalWrite(MD1, HIGH); digitalWrite(MD2, LOW);
  }
  else if (value4 < 200) {
    digitalWrite(MD2, HIGH); digitalWrite(MD1, LOW);
  }
  else
  {
    digitalWrite(MD2, LOW); digitalWrite(MD1, LOW);
  }

}
