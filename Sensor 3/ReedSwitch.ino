int reedSwitchPin = 2; // Conectar el reed switch al pin 2 de Arduino

void setup() {
  pinMode(reedSwitchPin, INPUT); // Configurar el pin del reed switch como entrada
  Serial.begin(9600); // Iniciar la comunicación serial
}

void loop() {
  int switchState = digitalRead(reedSwitchPin); // Leer el estado del reed switch
  Serial.println(switchState); // Imprimir el estado en el Monitor Serial
  delay(100); // Retardo para evitar la sobrecarga del puerto serie
}