#include <Arduino.h>
#define Sensor 32
void setup() {

  Serial.begin(115200);
}

void loop() {
  // 1. Leitura e Normalização (Transforma 0-4095 em 0.0-1.0)
  float leituraBruta = analogRead(Sensor);
  float leituraNormalizada = leituraBruta / 4095.0;

  // 2. Print no formato CSV (Facilita a vida do Python/Colab)
  // O formato será: timestamp, valor_normalizado
  Serial.print(millis());
  Serial.print(",");
  Serial.println(leituraNormalizada, 4); // 4 casas decimais

  delay(50); // 50ms = 20 leituras por segundo. Ideal para treinar padrões.
}
