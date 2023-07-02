int valor_umbral_limite = 50;
int valor_sensor_tactil;

int pin_led = 2;

void setup(){
  pinMode(pin_led, OUTPUT);
}

void loop(){
  valor_sensor_tactil = touchRead(T0);

  // - si el valor del sensor táctil disminuye, indica que fue tocado
  // - establecemos un valor de umbral máximo,
  // y si el sensor táctil devuelve valores menores a éste,
  // entonces encenderemos ó apagaremos el led
  // usando el operador ! para evitar condicionales porque niega el valor booleano actual
  if (valor_sensor_tactil < valor_umbral_limite){
    digitalWrite(pin_led, !digitalRead(pin_led));
    delay(1000);
  }
}
