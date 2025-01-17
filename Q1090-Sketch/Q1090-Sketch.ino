//Definição do uso dos pinos do Arduino
#define pinSensorD 2    //am
#define pinSensorA 4    //lj

//Configuração do projeto no Arduino
void setup() {
  //INICIA COMUNICACAO SERIAL
  Serial.begin(9600);

  //Configura o estado das portas do Arduino
  pinMode(pinSensorD, INPUT);
  pinMode(pinSensorA, INPUT);
}

void loop() {

  //Teste do Sensor de Chama
  
  Serial.print("Porta A");
  Serial.print(pinSensorA);
  Serial.print(":( ");
  Serial.print(analogRead(pinSensorA));
  Serial.print(") ");

  Serial.print("Porta D");
  Serial.print(pinSensorD);
  Serial.print(":( ");
  Serial.print(digitalRead(pinSensorD));
  Serial.print(") ");
  
  if (!digitalRead(pinSensorD)) {
     Serial.print(" - FOGO DETECTADO");
  } else {
     Serial.print(" - nenhum fogo detectado");
  }
  Serial.println();

  delay(1000);
}