/****************************************************************
 * RoboCore - Kit Robo Explorer - Primeiros Movimentos
 * Faz o robo executar uma sequencia de movimentos infinitamente.
 ****************************************************************/

// Inclui a biblioteca de controle dos motores
#include <RoboCore_Vespa.h>

// Configura o objeto "motores" a partir da biblioteca
VespaMotors motores;

// Declaração da variável que armazena o intervalo entre ações dos motores
const int INTERVALO = 1000;

void setup() {
  // Não há nada para ser configurado no código
}

void loop() { // Ações que serão executadas infinitamente
  // Aciona os dois motores para frente com velocidade máxima
  motores.forward(100);
  delay(INTERVALO); // Mantém os motores girando pelo tempo determinado
  motores.stop(); // Para os motores para a nova ação

  // Aciona o motor da esquerda com 90% da velocidade máxima e o motor da direita com 30%,
  // girando o robô para a direita
  motores.turn(90, 30);
  delay(INTERVALO); // Mantém os motores girando pelo tempo determinado
  motores.stop(); // Para os motores para a nova ação

  // Aciona o motor da esquerda com 30% da velocidade máxima e o motor da direita com 90%,
  // girando o robô para a esquerda
  motores.turn(30, 90);
  delay(INTERVALO); // Mantém os motores girando pelo tempo determinado
  motores.stop(); // Para os motores para a nova ação

  // Aciona os dois motores para trás com velocidade máxima
  motores.backward(100);
  delay(INTERVALO); // Mantém os motores girando pelo tempo determinado
  motores.stop(); // Para os motores para a nova ação

  // Repete o processo de girar para a esquerda e para a direita
  motores.turn(30, 90);
  delay(INTERVALO);
  motores.stop();

  motores.turn(90, 30);
  delay(INTERVALO);
  motores.stop();
}
