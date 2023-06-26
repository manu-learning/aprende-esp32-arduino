// - éste pin 22 es GPIO, puede hacer de entrada ó de salida
// - lo usaremos de salida
int pin_salida = 22;

void setup(){
  // definimos el pin en "modo salida" (output)
  pinMod(pin_salida, OUTPUT);
}

void loop(){
  // - cambiamos el estado de la salida a alto (HIGH)
  // - el LED se encenderá
  digitalWrite(pin_salida, HIGH);
  delay(1000);

  // - cambiamos el estado de la salida a bajo (LOW)
  // - el LED se apagará
  digitalWrite(pin_salida, LOW);
  delay(1000);
}
