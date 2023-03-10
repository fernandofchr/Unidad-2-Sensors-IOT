  //Se inicia los pines de sensor y un led
  int tiltsensor =12;
  int led=2;
  
  void setup()
  {
    pinMode(tiltsensor, INPUT);//Se inicia como entrada el sensor
    pinMode(led,OUTPUT);//Se inicia como salida el led
  }

  void loop()
  {
    if (digitalRead(tiltsensor) == 1){// si el sensor detecta su valor 
      digitalWrite(led,HIGH);//Entoces el led se encendera 
    }
    else{
      digitalWrite(led,LOW);//De otra manera solo se mantendra apagado
    }

    //Se añade un retraso para estabilidad
    delay(100);
  }