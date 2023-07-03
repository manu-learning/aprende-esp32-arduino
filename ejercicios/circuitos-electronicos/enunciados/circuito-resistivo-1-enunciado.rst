Enunciado
==========

- Calcular el valor de R2, si la corriente R5=0,8 amp, y la total IT=1,7 amp
- Se sabe que IR1=IR2, IT=IR3+IR1, IR3=IR5+IR4

Componentes necesarios
======================

- 1 fuente de tensión continua de 20 voltios
- 5 resistencias (R1=25ohm, R2=?, R3=10ohm, R4=20ohm, R5=10ohm)
- 2 multimetros
  - uno para medir la tensión
  - otro para medir la corriente

Solución
=========

1. Si IR5=0,8 A, y su resistencia es 10ohm

   - podemos calcular el voltaje V= IR5*VR5= 0,8*10= 8V
   - entonces el voltaje en R4 es el mismo, porque están en paralelo

2. Calculamos la corriente en R4, IR4= VR4/R4= 8V/20ohm= 0,4 A
3. Si IR3= IR4+IR5= 0,4+0,8= 1,2 A

   - calculamos la tensión ó voltaje en R3, VR3= IR3*R3= 1,2*10= 12V
   - el voltaje total en (R3,R4) es VR3+VR4= 12+8= 12V

4. Si el voltaje (R1,R2) es el mismo que (R3,R4) porque están en paralelo

   - Calculamos la corriente IR1=IR2
   - IT= IR1+IR3 => IR1= IT-IR3= 1,7-1,2= 0,5 A

5. Con la corriente R1 y R2, calculamos el voltaje en R1

   - el voltaje R1 y R2 suman 20V= R1*R1+R2*R2
   - IR1=IR2 => 20V=IR1*(R1+R2)= 0,5*(25+R2) => (20/0,5) -25= R2=40-25= 15ohm
