  #include <Keypad.h>  
  const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
  const int LED_PIN = 10;
  const int POT = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode (LED_PIN,OUTPUT);
  pinMode (POT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int POT_VAL= analogRead(POT);
  int POT_VOLT = POT_VAL/16;
  delay(10);
  Serial.println(POT_VAL);
  analogWrite(LED_PIN,POT_VOLT);
}
