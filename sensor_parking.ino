int LEDPOS = 6;
int LEDCOR = 7;
int pulsador1 = 8; 
int pulsador2 = 9; 
int estado1;
int estado2;

void setup() {
  pinMode(LEDPOS, OUTPUT);
  pinMode(LEDCOR, OUTPUT);
  pinMode(pulsador1, INPUT_PULLUP);
  pinMode(pulsador2, INPUT_PULLUP);
  estado1 = 0;
  estado2 = 0;
}

void loop() {
  // Control para el primer LED con el primer pulsador
  if (digitalRead(pulsador1) == LOW) {
    estado1 = digitalRead(LEDPOS);
    digitalWrite(LEDPOS, !estado1);
    delay(200); // Añade un retardo para evitar el rebote del pulsador
    while (digitalRead(pulsador1) == LOW);
  }

  // Control para el segundo LED con el segundo pulsador
  if (digitalRead(pulsador2) == LOW) {
    estado2 = digitalRead(LEDCOR);
    digitalWrite(LEDCOR, !estado2);
    delay(200); // Añade un retardo para evitar el rebote del pulsador
    while (digitalRead(pulsador2) == LOW);
  }
}
