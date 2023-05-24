/*13. Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela
abaixo:
CONSUMO (Km/l) MENSAGEM
Menor que 8 Venda o carro!
Entre 8 e 12 Econômico!
Maior que 12 Super econômico!
  */
#include <iostream>

using namespace std;

int main() {
  float distancia, litros, KmL;

  cout << "\n\ndigite a quantidade de Km percorridos: ";
  cin >> distancia;
  cout << "digite a quantidade de combustivel gasto: ";
  cin >> litros;

  KmL = distancia / litros;

  if (KmL < 8){
    cout << "venda o carro. ";
  }else{
    if ((KmL >= 8) && (KmL < 12)){
      cout << "Economico: ";
    }else{
      cout << "super economico: ";
    }
  }
}