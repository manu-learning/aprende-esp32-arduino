// Implementación
// ==============

// - éste pin es un pin GPIO, porque sirve como entrada ó salida
// - lo usaremos como "pin de entrada"
int pin=23;

void setup(){
  // - inicializamos el "puerto serie" a 9600
  // - el puerto serie lo usaremos para imprimir un mensaje por la "consola serial"
  Serial.begin(9600);

  // definimos el pin en "modo de entrada" (input)

  // - si queremos usar una "Resistencia externa" a la placa ESP32/DevKit v1
  // pinMode(pin, INPUT);

  // - si queremos usar la "Resistencia pulldown interna" de la placa ESP32/DevKit v1
  // - nos evitamos usar componentes físicos adicionales
  pinMode(pin, INPUT_PULLDOWN);
}

void loop(){
  // - persistimos el estado del pin que usaremos de entrada
  // - digitalRead devolverá la lectura del estado actual de la entrada
  int v_state = digitalRead(pin);

  // comprobamos si se encuentra en "estado alto"
  if(v_state == HIGH){
    Serial.println("Pulsador presionado");
  }

  delay(100); // en milisegundos
}
