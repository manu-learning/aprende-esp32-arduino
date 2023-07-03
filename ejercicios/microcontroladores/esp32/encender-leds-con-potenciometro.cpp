// - usaremos el canal ó pin 34 como "entrada analógica"
const int portPin = 34;

// - los canales o pines 25,32,33 los usaremos como "salidas digitales"
// - en estos canales ó pines, conectaremos los leds
const int led_1 = 25;
const int led_2 = 33;
const int led_3 = 32;

int potenciometroValor = 0;

void setup(){
  Serial.begin(115200);

  // - definimos los pines en "modo salida" (OUTPUT)
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);

  delay(1000);
}

void loop(){
  // - repartimos entre los 3 leds, el voltaje que ingresa en la "entrada analógica" que es controlada por el potenciometro conectado a ésta
  // - comprobamos el voltaje en base a los valores enteros generados por el conversor ADC
  // al mapear el voltaje que ingresa a la "entrada analógica" a la que está conectada el potenciometro 
  // entonces dividimos 3.3v de alimentación de la placa representado por el 4095 (generado por el conversor ADC)
  //
  // al dividir 4095/3=1365, por cada nuevo led usaremos el valor 1365
  //
  // - 1365*1=1365 para encender un led
  // - 1365*2=2730 para encender dos leds
  // - 1365*3=4095 para encender tres leds
  //
  // - siendo 4095 el máximo valor entero generado por el conversor ADC
  // de la placa de 3.3v utilizando la resolución de 12 bits por defecto del conversor ADC
  // al mapear el voltaje máximo de la placa que son 3.3voltios
  potenciometroValor = analogRead(portPin);
  Serial.println(potenciometroValor);

  // si el "valor mapeado" del "valor de voltaje" de la entrada por el "conversor ADC" de la placa
  // es mayor al valor entero 1365
  if (potenciometroValor >= 1365){
    // cambiamos el "estado lógico" de la salida digital a "estado alto",
    // es decir encendemos el led 1
    digitalWrite(led_1, HIGH);
  } else if (potenciometroValor < 1365){
     /// cambiamos el "estado lógico" de la salida digital a "estado bajo",
    // es decir apagamos el led 1
    digitalWrite(led_1, LOW);
  }

  if (potenciometroValor >= 2730){
    // mismo comportamiento que con el led 1, encendemos el led 2
    digitalWrite(led_2, HIGH);
  } else if (potenciometroValor < 2730){
    // mismo comportamiento que con el led 1, apagamos el led 2
    digitalWrite(led_2, LOW);
  }

  // - el valor entero 4095 representa el mayor valor que genera el conversor ADC
  // de la placa al mapear el máximo voltaje (3.3 voltios)
  // si utilizamos la resolución por defecto de 12 bits
  if (potenciometroValor == 4095){
    // mismo comportamiento que con el led 1, encendemos el led 3
    digitalWrite(led_3, HIGH);
  } else if (potenciometroValor < 4095){
   // mismo comportamiento que con el led 1, apagamos el led 3
    digitalWrite(led_3, LOW);
  }
}
