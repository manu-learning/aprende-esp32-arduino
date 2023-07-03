// Objetivo del ejemplo
//=====================
// - Leer la capacitancia de un sensor táctil (también conocido como sensor touch)

void setup(){
  Serial.begin(115200);
  delay(1000);
  Serial.println("Probando imprimir la capacitancia de un sensor táctil");
}

void loop(){
  // función touchRead()
  // - recibe por parámetro el sensor táctil T0 ó Touch0,
  // asociado al pin GPIO 4 de la placa ESP32
  // - devuelve el valor de capacitancia del sensor táctil asociado,
  // si éste cambia entonces se considera que el sensor táctil fue tocado
  //
  // - mientras  no toquemos el sensor táctil,
  // la consola serial imprimirá como mensaje la capacitancia del sensor táctil
  //
  // - si tocamos el cable del sensor táctil,
  // la función devolverá valores más chicos
  Serial.println(touchRead(T0));
  delay(1000);
}
