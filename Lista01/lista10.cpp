/*Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração, multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção (E) e disjunção (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>

using namespace std;

int main() {
  float A, B, C, D;

  cout << "\n\ndigite um numero: ";
  cin >> A;
  cout << "\n\ndigite outro numero: ";
  cin >> B;

  cout << "\n\nA soma dos numeros e: " << A+B << "\n\na subtracao: " << A-B << "\n\na multiplicacao: " << A*B << "\n\ne a divisao e: " << A/B;

  cout << "\n\n digite mais um numero: ";
  cin >> C;
  cout << "\n\ne mais um: ";
  cin >> D;

  if (C > 5 && D < 8) {
   cout << "\n\nnumero aceito " ;
  }else {
    cout << "\nnumero nao aceito ";
  }
  if (C >= 3 || D == 8) {
    cout << "\nnumero validado ";
    
  }else {
    cout << "\nnumero nao validado ";
  }
  if (C != D) {
    cout << "\nnumros diferentes ";
  }else {
    cout << "\nnumeros iguais ";
  }


  return 0;
}