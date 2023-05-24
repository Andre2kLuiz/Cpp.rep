/*6. A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
Professor nível 1 R$ 12,00 por hora aula
Professor nível 2 R$ 17,00 por hora aula
Professor nível 3 R$ 25,00 por hora aula 
*/
#include <iostream>

using namespace std;

int main() {
  int nivel;
  float hora, valorfinal;

  cout << "\n\tdigite de que nivel voce e professor (1) nivel 1 (2) nivel 2 (3) nivel 3: ";
  cin >> nivel;
  cout << "\n\tdigite quantas horas voce trabalha por dia: ";
  cin >> hora;

  if (((nivel == 1) || (nivel == 2) || (nivel == 3))){
    if (nivel == 1){
     valorfinal = hora * 12; 
      cout << "\n\to seu salario e: " << valorfinal * 20;
    }else{
      if (nivel == 2){
        valorfinal = hora * 17;
        cout << "\n\to seu salario e: " << valorfinal * 20;
      }else{
        if(nivel == 3){
          valorfinal = hora * 25;
          cout << "\n\to seu salario e: " << valorfinal * 20;
        }
      }
    }
  }else{
    cout << "voce digitou um nivel errado.";
  }
  return 0;
}