# 🏎️ Smart Line Follower - ESP32 + TinyML (LSTM)
Este repositório contém o desenvolvimento de um sistema de controle preditivo para um robô seguidor de linha, utilizando Redes Neurais Recorrentes (RNN/LSTM) executadas diretamente em um microcontrolador ESP32.

O objetivo principal é permitir que o robô aprenda o traçado da pista e antecipe curvas através da análise de séries temporais de sensores infravermelhos, otimizando o controle PID clássico com inteligência artificial.

# 🚀 Visão Geral do Projeto
Diferente de seguidores de linha tradicionais que reagem apenas ao erro atual, este projeto utiliza TinyML para prever a tendência do erro futuro.

- Coleta de Dados: O ESP32 envia leituras normalizadas via Serial.

- Treinamento: Uma rede LSTM é treinada no Google Colab para prever o próximo estado do sensor.

- Inferência: O modelo é comprimido e embarcado no ESP32 usando TensorFlow Lite for Microcontrollers.

# 🛠️ Tecnologias Utilizadas
- Hardware: ESP32 (DevKit V1), Sensores Infravermelhos (IR).

- Firmware: C++, PlatformIO, Framework Arduino.

- Inteligência Artificial: Python, TensorFlow, Keras (LSTM), NumPy, Pandas.

- Ferramentas: Google Colab (Treinamento), Git (Versionamento).

# 📊 Estrutura da Rede Neural (LSTM)

A rede foi projetada para ser leve o suficiente para rodar em tempo real no ESP32:

- Input: Janela deslizante (Sliding Window) das últimas 10 leituras do sensor.

- Camada Oculta: LSTM com 16 unidades (ativação tanh).

- Output: 1 neurônio (camada Dense) prevendo o próximo valor normalizado.

