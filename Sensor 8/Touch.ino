//pin del led en el 13
const int ledPin =  13;
//pin del sensor en el  4
const int touchPin = 4;
 
//se almacena el tiempo del utlimo evento
unsigned long lastEvent = 0;
//y el estado del led se almacena en falso
boolean ledOn = false;
 
//Se configuran los pines
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
}
 
void loop(){
  //se obtiene el valor del sensor
  int touchState = digitalRead(touchPin);
 
  //Solo interesa el estado encendido
  if (touchState == HIGH) {
    //si pasan 50 milisegundos despues de que su ultimo estado sea encendido 
    //Significa que el sensor fue tocado, se solto y volvio a ser tocado
    if (millis() - lastEvent > 50) {
      //Se enciende el led con una sentecia de negacion al false inicial y se configura su salida
      ledOn = !ledOn;
      digitalWrite(ledPin, ledOn ? HIGH : LOW);
    }
 
    //Aqui se va almacenando el teimpo del ultimo evento para repetir 
    lastEvent = millis();
  }
}
