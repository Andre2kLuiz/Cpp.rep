/*19. Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente ao dia. Considere que domingo é o dia 1 e sábado é o dia 7. 
  */
#include <iostream>

using namespace std;

int main() {
  int semana;

  cout << "digite para\n" << "[1] domingo.\n" << "[2] segunda\n" << "[3] terça\n" << "[4] quarta\n" << "[5] quinta\n" << "[6] sexta\n" << "[7] sabado\n";
  cin >> semana;

  if ((semana == 1) || (semana == 7)){
    cout << "fim de semana";
  }else{
    if((semana > 1) && (semana < 7)){
      cout << "dia util";
    }else{
      cout << "dia invalido.";
    }
  }
}