Conceptos Aplicados
===================

- Entradas Analógicas (pin a la que está conectado el potenciometro)
- Salidas Digitales (pines a los que están conectados los leds)
- Potenciometro

	- regula la cantidad de voltaje (en voltios) que pasará a la placa, en función de la rotación

- lecturas del **Potenciometro** mediante el **Conversor ADC** con la resolución de ``12 bits``

	- valores de entre 0 al 4095
	- el ``0`` el menor valor mapeado, asociado al menor voltaje ``0v``
	- el ``4095`` el mayor valor mapeado, asociado al mayor voltaje ``3.3v`` de la placa
