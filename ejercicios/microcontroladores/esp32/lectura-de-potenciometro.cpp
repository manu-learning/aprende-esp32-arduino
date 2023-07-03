// - usaremos como "entrada analógica" el canal ó pin 34 (es un pin GPIO)
// - conectamos el pin central del potenciometro a éste pin 34 de la placa
// (los dos pines restantes los conectamos a los pines GND y 3.3v de la placa)
const int portPin=34;

// - inicializamos en 0, dónde almacenaremos el valor leído del potenciometro
// (valor leído a través de la "entrada analógica")
int potenciometroValor=0;

void setup(){
  // - inicializamos el puerto serial para imprimir mensajes porla  consola serial
  // - en la consola serial imprimiremos los valores leidos de la "entrada analógica"
  Serial.begin(9600);
  delay(1000);
}

void loop(){
  // - analogRead leerá los valores de la "entrada analógica" al que está conectado el potenciometro
  // - almacenamos los valores leidos de la entrada analógica
  potenciometroValor = analogRead(portPin);

  // - imprimimos los valores leidos de la entrada analógica
  Serial.println(potenciometroValor);

  // pausamos por 1 segundo (ó bien 1000 milisegundos)
  delay(1000);
}
