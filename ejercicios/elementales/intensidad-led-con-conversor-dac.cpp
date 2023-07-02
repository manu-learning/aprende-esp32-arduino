// - elegimos el pin GPIO 25 que corresponde a uno de los canales del Conversor DAC del ESP32
// - lo usaremos como "salida analógica", porque le entregaremos una cantidad de voltaje
const int led = 25;

// - como la "resolución" de los "canales" del "Conversor DAC" del "minicontrolador ESP32"
// son de 8 bits, el rango de valores es de 0 a 255 (asociados a voltajes)
// porque 2^8 Bytes=256
//
// - el 0 corresponde a 0 voltios (sin voltaje, el led se apagará)
// - el 255 corresponde a 3.3voltios (máximo voltaje) que puede entregar
const int max_intensidad_luminosidad=255;
const int min_intensidad_luminosidad=0;

void setup(){
}

void loop(){
  // - incrementamos gradualmente la intensidad de luminosidad del led conectado
  // cada 100milisegundos
  for(int intensidad_luminosidad=min_intensidad_luminosidad; intensidad_luminosidad < max_intensidad_luminosidad; intensidad_luminosidad++){
    // - la función dacWrite pertenece a la biblioteca de Arduino-ESP32
    dacWrite(led, intensidad_luminosidad);
    delay(100);
  }
}
