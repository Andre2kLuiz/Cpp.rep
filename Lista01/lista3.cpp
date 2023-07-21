/*3. Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros. */
#include <iostream>

using namespace std;

int main() {
  float compra, quantPrestacao, valorPestacao;

  cout << "Digite o valor da sua compra: " << endl;
  cin >> compra;

  cout << "Digite em quantas veses sera dividido sua compra: " << endl;
  cin >> quantPrestacao;

  valorPestacao = compra / quantPrestacao;

  cout << quantPrestacao << " x de " << valorPestacao << "R$" << " sem juros." << endl;
 
  return 0;
}
