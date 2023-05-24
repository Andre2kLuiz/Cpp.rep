/*12. Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
  */
#include <iostream>

using namespace std;

int main() {
  int idade, ts;

  cout <<  "\n\t\t"<<"------------" << "Verificacao de aposentadoria" << "------------";

  cout << "\n\ndigite sua idade: ";
  cin >> idade;
  cout << "\n\ndigite seu tempo de servico: ";
  cin >> ts;

  if ((((idade >= 65) || (ts >= 30)) || ((idade >= 60) && (ts >= 25)))){
    cout << "ja pode se aposentar: ";
  }else{
    cout << "ainda nao pode se aposentar: ";
  }
}