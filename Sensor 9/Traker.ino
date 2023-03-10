const int sensorPin = 5; // Pin analógico del sensor de evitación de obstáculos
const int ledPin =2; // Pin del LED incorporado en el Arduino

void setup() {
  pinMode(ledPin, OUTPUT); // Configurar el pin del LED como salida
  pinMode(sensorPin, INPUT);
  Serial.begin(9600); // Inicializar la comunicación serial
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Leer el valor analógico del sensor
  Serial.println(sensorValue); // Imprimir el valor en el monitor serial
  if (sensorValue < 600) { // Si el valor es menor que 500
    digitalWrite(ledPin, LOW); // Encender el LED
  } else {
    digitalWrite(ledPin, HIGH); // Apagar el LED
  }
  delay(1000); // Esperar 100 milisegundos antes de la siguiente lectura
}