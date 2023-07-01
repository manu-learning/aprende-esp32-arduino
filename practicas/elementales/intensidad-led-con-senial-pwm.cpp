const int led_pin = 32;

// propiedades PWM

//- definimos una frecuencia de 5.000 hercios
//- son la cantidad de pulsos por segundo
// - la placa ESP32 nos permite frecuencias desde 1 a 40.000kHz (kilohercios)
const int frecuencia = 5000;

// - elegimos el canal PWM (el numero de pin que lo soporte)
// - la placa ESP32 nos permite elegir uno de los 16 pines (0 al 15)
const int canal_pwm = 0;

// - los 8 bits nos proporciona un rango de valores de entre 0 a 255
// - la placa ESP32 permite desde 1 a 16 bits
const int bits_de_resolucion = 8;

// - estos valores 0 al 255, son los que comenté de los 8 bits de resolución
const int max_intensidad_luminosidad=255;
const int min_intensidad_luminosidad=0;

void setup(){
  // - la función ledcSetup, inicializa el canal PWM
  ledcSetup(canal_pwm, frecuencia, bits_de_resolucion);

  // - la función ledcAttachPin, asocia un Canal PWM a un pin GPIO
  ledcAttachPin(led_pin, canal_pwm);
}

// la función ledcWrite
// - pertenece a la biblioteca de Arduino-ESP32
// - nos permite ajustar el "ciclo de trabajo" (duty cicle) de la señal PWM
void loop(){
  // - incrementamos gradualmente la intensidad de luminosidad del led
  // - el "ciclo de trabajo" (duty cycle) irá incrementando porcentualmente,
  // aumentando la cantidad de "pulsos altos" respecto a los "pulsos bajos" que serán menores
  // (la frecuencia permanecerá constante, la que definimos al principio)
  for (int duty_cicle=min_intensidad_luminosidad; duty_cicle <= max_intensidad_luminosidad; duty_cycle++){
    ledcWrite(canal_pwm; duty_cycle);
    delay(15);
  }

  // - decrementamos gradualmente la intensidad de luminosidad del led
  // - el "ciclo de trabajo" (duty cycle) irá decrementando porcentualmente,
  // disminuyendo la cantidad de "pulsos altos" respecto a los "pulsos bajos" que serán mayores
  // (la frecuencia permanecerá constante, la que definimos al principio)
  for (int duty_cicle=max_intensidad_luminosidad; duty_cicle >= min_intensidad_luminosidad; duty_cycle--){
    ledcWrite(canal_pwm; duty_cycle);
    delay(15);
  }
}
