// Objetivo del Ejemplo
// ====================
// - Lanzar interrupciones de hardware mediante sensores táctiles

int valor_de_umbral=40;
bool sensorTactil1_detectado = false
bool sensorTactil2_detectado = false

void sensor1_capturado(){
  sensorTactil1_detectado = true;
}

void sensor2_capturado(){
  sensorTactil2_detectado = true;
}

void setup(){
  Serial.begin(115200);
  delay(1000);
  Serial.print("Probando lanzar interrupciones con sensores táctiles");

  // función touchAttachInterrupt
  // - asociamos el sensor táctil T2
  // - cuando el valor del sensor táctil T2 es menor que valor de umbral definido,
  // se lanzará una interrupción y se ejecutará la función sensor1_capturado
  touchAttachInterrupt(T2, sensor1_capturado, valor_de_umbral);

  // función touchAttachInterrupt
  // - asociamos el sensor táctil T3
  // - cuando el valor del sensor táctil T3 es menor que valor de umbral definido,
  // se lanzará una interrupción y se ejecutará la función sensor2_capturado
  touchAttachInterrupt(T3, sensor2_capturado, valor_de_umbral);
}

void loop(){
  if (sensorTactil1_detectado){
    sensorTactil1_detectado = false;
    Serial.println("Sensor táctil (1) detectado");
  }

  if (sensorTactil2_detectado){
    sensorTactil2_detectado = false;
    Serial.println("Sensor táctil (2) detectado");
  }
}
