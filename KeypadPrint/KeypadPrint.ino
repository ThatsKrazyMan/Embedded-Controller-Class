#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] =
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {A0, A1, A2, A3};
byte colPins[COLS] = {A4, A5, A6, A7};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const int LED_PIN1 = D12;
const int LED_PIN2= D11;
const int LED_PIN3= D10;

int number=NULL;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  char key = keypad.getKey();

  if (key)
  {
    Serial.print("key : ");
    Serial.println(key);
  }

  if (key)
  {
    if (key =='0')
    {
      number = 0;
    }
    else if (key =='1')
    {
      number = 1;
    }
    else if (key =='2')
    {
      number = 2;
    }
    else if (key =='3')
    {
      number = 3;
    }
    else if (key =='4')
    {
      number = 4;
    }
    else if (key =='5')
    {
      number = 5;
    }
    else if (key=='6')
    {
      number = 6;
    }
    else if (key=='7')
    {
      number = 7;
    }
    else if (key=='8')
    {
      number = 8;
    }
    else if (key=='9')
    {
      number = 9;
    }
    else if (key=='A')
    {
      number = 10;
    }
    else if (key=='B')
    {
      number = 11;
    }
    else if (key=='C')
    {
      number = 12;
    }
    else if (key=='D')
    {
      number = 13;
    }
    else if (key=='*')
    {
      number = 14;
    }
    else if (key=='#')
    {
      number = 15;
    }
  }

  if (number == 0)
  {
    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);
  }

  else if (number == 1)
  {
    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    digitalWrite(LED_PIN3, LOW);
  }

  else if (number == 2)
  {
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);
  }

  else if (number == 3)
  {
    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if (number == 4)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);
  }

  else if (number == 5)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if (number == 6)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);
    
    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);
    delay(1);
  }

  else if (number == 7)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if (number == 8)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);
  }

  else if (number == 9)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }
  else if (number == 10)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if (number == 11)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if (number == 12)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);
  }

  else if(number == 13)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if (number == 14)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }

  else if(number == 15)
  {
    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, HIGH);

    delay(1);

    pinMode(LED_PIN1, INPUT);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, OUTPUT);
    digitalWrite(LED_PIN3, LOW);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, LOW);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, HIGH);

    pinMode(LED_PIN3, INPUT);

    delay(1);

    pinMode(LED_PIN1, OUTPUT);
    digitalWrite(LED_PIN1, HIGH);

    pinMode(LED_PIN2, OUTPUT);
    digitalWrite(LED_PIN2, LOW);

    pinMode(LED_PIN3, INPUT);

    delay(1);
  }
}
