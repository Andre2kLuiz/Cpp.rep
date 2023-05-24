/*16. Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a carteira. 
  */
#include <iostream>

using namespace std;

int main() {
  int idade, af;

  cout << "digite sua idade: ";
  cin >> idade;

  if (idade >= 18){
    cout << "voce pode tirar sua carteira de habilitacao.";
  }else{
    af = 18 - idade;
    cout << "fautam " << af << " anos para voce tirar sua abilitacao.";
  }

  return 0; 
}