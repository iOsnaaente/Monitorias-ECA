
#define LED_BUILTIN 25  // Led construido na placa do Rasp 
#define PIN_LED 13      // Led conectado em outra GPIO 

void setup() {
  // Função PinMode define a função da GPIO  
  // PIN_LED = número do pino que iremos configurar
  // OUTPUT = função de SAÍDA do pino 
  pinMode(PIN_LED, OUTPUT); 
  
}

void loop() {
  // Função digitalWrite escreve o valor do pino 
  digitalWrite(PIN_LED, HIGH); 
  // delay = Pausa em mS -> 1000mS = 1S
  delay(1000);
  
  // HIGH = Nível alto = 3.3V
  // LOW = Nível baixo = 0V
  digitalWrite(PIN_LED, LOW);
  // Mais uma pausa de 1S para manter o ciclo 
  delay(1000);
}
