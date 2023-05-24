/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
CÓDIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30% */
#include <iostream>

using namespace std;

int main() {
  int codigo;
  float salario=0, novosalario=0;

  cout << "\n\tdigite o valor do seu salario: ";
  cin >> salario;
  cout << "\n\tdigite o codigo do seu cargo 101(gerente), 102(engeneiro), 103(tecnico): ";
  cin >> codigo;

  if (((codigo == 101) || (codigo == 102) || (codigo == 103))){
    if (codigo == 101){
      novosalario = salario * 0.1;
       
      cout << "\n\tseu novo salario e: " << salario + novosalario;
    }else {
      if (codigo == 102){
        novosalario = salario * 0.2;
        cout << "\n\tseu novo salario e: " << salario + novosalario;
      }else {
        if(codigo == 103){
          novosalario = salario * 0.3;
          cout << "\n\tseu novo salario e: " << salario + novosalario;
        }
      }
    }
  }else {
      novosalario = salario * 0.4;
      cout << "\n\tseu novo salario e: " << salario + novosalario;
    }

return 0; 
  
}