/*4. Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago.*/
#include <iostream>

using namespace std;

int main() {
  int ano;
  float preco, taxa, taxa2; 

  cout << "\nescreva o preço do carro: ";
  cin >> preco;
  cout << "\nescreva o valor do carro: ";
  cin >> ano;
  taxa = preco * 0.01;
  taxa2 = preco * 0.015;
  if (ano < 1990){
    cout << "\ntotal de imposto a ser pago: " << taxa;
  }else {
    cout << "\ntotal de imposto a pagar: " << taxa2;
  }
  
}