//Se declaran variables par dar salida a los pines
int red=2;
int green=4;
int blue=15;
void setup() {

  //Se inicializan objetos para permitir la salida a los pines

  //Led 1
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {

  //Se enciende el color verde en ambos leds
  analogWrite(green,255);
  delay(1000);

  //Se enciende los led para formar el amarillo
  analogWrite(red,255);
  analogWrite(blue,0);
  delay(1000);

  //Se apaga el color verde y se enciende el color rojo 
  analogWrite(green,0);
  analogWrite(red,255);
  delay(1000);
  //Se prende el color azul
  analogWrite(blue,255);
  delay(1000);
  //Se prende el verde para hacer el blacno 
  analogWrite(green,255);
  delay(1000);
  //Se apaga el azul para el amarillo 
  analogWrite(blue,0);
  delay(1000);
  //Se apaga el rojo para volver a iniciar con el verde
  analogWrite(red,0);
  
}