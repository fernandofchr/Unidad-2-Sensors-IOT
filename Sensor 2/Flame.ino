int buzzer = 2;      // selecciona el pin para el zumbador
int valorSensor = 0;  // variable para almacenar el valor proveniente del sensor
void setup() {
 //Seteo de la velocidad del puerto serial
 Serial.begin(9600);
 // declarar buzzer como una SALIDA:
  pinMode(buzzer, OUTPUT);
}
void loop() {
  // leer el valor del sensor:
  valorSensor = analogRead(4);
   Serial.println(valorSensor);
  // activa el buzzer
  if (valorSensor < 500){
   digitalWrite(buzzer, HIGH);
   delay(100);
  // Desactiva el buzzer
  digitalWrite(buzzer, LOW);
  delay(50);  
    }
 }