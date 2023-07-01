// ambos pines (22 y 23) son GPIO, pueden ser utilizados como entrada ó salida
int pin_entrada = 23;
int pin_salida = 22;

void setup(){
  // - usamos la resistencia interna de la placa
  // - utilizamos el pin en modo entrada (INPUT)
  // - la resistencia Pull-Down establece un "estado bajo" (LOW) en el pin de entrada,
  // es decir el led quedará apagado (no recibirá voltaje)
  pinMode(pin_entrada, INPUT_PULLDOWN);

  // utilizamos el pin en modo salida (output)
  pinMode(pin_salida, OUTPUT);
}

void loop(){
  // almacenamos el estado del pin de entrada
  int v_entrada = digitalRead(pin_entrada);

  // si presionamos el pulsador, su estado pasará a alto (HIGH)
  if(v_entrada == HIGH){
    // encendemos y apagamos el led
    digitalWrite(pin_salida, HIGH);
    delay(1000);
    digitalWrite(pin_salida, LOW);
    delay(1000);

    // repetimos comportamiento, de encender y apagar el led
    digitalWrite(pin_salida, HIGH);
    delay(1000);
    digitalWrite(pin_salida, LOW);
    delay(1000);
  }
}
