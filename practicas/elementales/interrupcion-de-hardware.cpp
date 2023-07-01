// Objetivo del ejemplo
// =====================
// - Lanzar interrupciones de hardware (también conocidas como externas)

int pin_luz_verde = 14;
int pin_luz_amarilla = 27;
int pin_luz_roja = 26;

int pin_pulsador = 25;

// el atributo IRAM_ATTR
// - coloca el bloque de código de ésta función en la memoria RAM de minicontrolador (Ej. del esp32)
// - no utilizarlo implíca que se coloque en la memoria flash que es más lenta que la memoria RAM
//
// esta función ISR
// - la asociaremos a la interrupción de hardware
// - NO recibe parámetros, ni devuelve valores
// - para compartir datos entre ésta función y el "programa principal"
// necesitamos utilizar "variables declaradas como volátiles" porque "cargan su valor desde la memoria RAM"
void IRAM_ATTR encenderTodasLasLuces(){
  digitalWrite(pin_luz_verde, HIGH);
  digitalWrite(pin_luz_amarilla, HIGH);
  digitalWrite(pin_luz_roja, HIGH);
}

void setup(){
  pinMode(pin_luz_verde, OUTPUT);
  pinMode(pin_luz_amarilla, OUTPUT);
  pinMode(pin_luz_roja, OUTPUT);

  // en la función attachInterrumpt
  // ==============================
  //
  // - asociamos el pin gpio que provocará la interrupción de hardware,
  // siendo el minicontrolador quien monitorizará esa entrada para lanzar la interrupción
  // (en éste caso el pin de entrada al que conectamos el pulsador)
  //
  // - asociamos una función ISR que se ejecutará cada vez que se lance la Interrupción
  // (en éste caso enciende todas las luces)
  //
  // - asociamos que "cambio de estado" escuchar del pin gpio asociado, es decir "cuando" lanzar la interrupción
  // (en éste caso RISING sería un cambio de "estado bajo" a un cambio de "estado alto",
  // cuando presionemos el pulsador ocurrirá esa transición de cambiado de estado RISING)
  atttachInterrumpt(digitalPinToInterrupt(pin_pulsador), encenderTodasLasLuces, RISING);
}

// el flujo principal del programa
// ================================
// - loop infinito de una secuencia de encendido/apagado de las luces, en éste orden "verde, amarilla, roja, .."

// objetivo
// =========
// - cortar el "flujo principal del programa" mediante una "interrupción de hardware"

// como alcanzamos el objetivo
// ===========================
//
// 1. el minicontrolador (Ej. esp32) monitoriza el cambio de estado
// del pin gpio a la que está conectado el pulsador
// 2. al presionar el pulsador, la entrada (el pin gpio) "cambiará de estado" de LOW a HIGH
// 3. el "cambio de estado" anterior provocará que se lance una "interrupción de hardware"
// 4. la "interrupción de hardware" detendrá el "flujo principal del programa",
// ejecutando nuestra "función ISR" asociada a la interrupción
void loop(){
  digitalWrite(pin_luz_verde, HIGH);
  digitalWrite(pin_luz_amarilla, LOW);
  digitalWrite(pin_luz_roja, LOW);
  delay(2000);

  digitalWrite(pin_luz_verde, LOW);
  digitalWrite(pin_luz_amarilla, HIGH);
  digitalWrite(pin_luz_roja, LOW);
  delay(2000);

  digitalWrite(pin_luz_verde, LOW);
  digitalWrite(pin_luz_amarilla, LOW);
  digitalWrite(pin_luz_roja, HIGH);
  delay(2000);
}
