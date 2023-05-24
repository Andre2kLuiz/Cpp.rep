/*O cardápio de uma lanchonete é o seguinte: 
Sanduíche 
Código Descrição Preço 
Unitário 
100 Cachorro quente 1,10 
101 Baurú simples 1,30 
102 Baurú com ovo 1,50 
103 Hamburger 1,10 
104 Cheesburger 1,30 
Bebida 
Código Descrição Preço 
Unitário 
105 Refrigerante 1,00 
106 Suco 2,00 
107 Nescau 1,50 
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche. 
  */

#include <iostream>

using namespace std;

int main() {
  int codigo1=0, codigo2=0, quantidade1, quantidade2;
  float valortotal1, valortotal2, valorfinal;
  
  do{
  cout << "\n\t\t\tdigite o codigo do lanche desejado: \n\n";
  cout << "\n(100) = Cachorro quente, \n(101) = Baurú simples, \n(102) = Baurú com ovo, ";
  cout << "\n(103) = Hamburger, \n(104) = Cheesburger. \n";
  cin >> codigo1;
  system("clear||cls");
  }while(((codigo1 < 100) || (codigo1 > 104)));
  
  do{
  cout << "\ndigite a quantidade: ";
  cin >> quantidade1;
  system("clear");
  }while(quantidade1 <= 0);

  do{
  cout << "\n\t\t\tdigite o codigo do lanche desejado: \n\n";
  cout << "\n(105) = Refrigerante, \n(106) = Suco, \n(107) = Nescau, \n";
  cin >> codigo2;
  system("clear");
  
  }while(((codigo2 < 105) || (codigo2 > 107)));

  do{
  cout << "\ndigite a quantidade: ";
  cin >> quantidade2;
  system("clear");
  }while(quantidade2 <= 0);

  switch(codigo1){
    case 100:
      valortotal1 = quantidade1 * 1.1;
      cout << "\nesta quantidade de Cachorro quente da o valor de: R$" << valortotal1;
    break;
    case 101:
      valortotal1 = quantidade1 * 1.3;
      cout << "\nesta quantidade de Baurú simples da o valor de: R$" << valortotal1;
    break;
    case 102:
      valortotal1 = quantidade1 * 1.5;
      cout << "\nesta quantidade de Baurú com ovo da o valor de: R$" << valortotal1;
    break;
    case 103:
      valortotal1 = quantidade1 * 1.1;
      cout << "\nesta quantidade de Hamburger da o valor de: R$" << valortotal1;
    break;
    case 104:
      valortotal1 = quantidade1 * 1.3;
      cout << "\nesta quantidade de Cheesburger da o valor de: R$" << valortotal1;
    break;
  }

  switch(codigo2){
    case 105:
      valortotal2 = quantidade2 * 1.;
      cout << "\nesta quantidade de Refrigerante da o valor de: R$" << valortotal2;
    break;
    case 106:
      valortotal2 = quantidade2 * 2.;
      cout << "\nesta quantidade de Suco da o valor de: R$" << valortotal2;
    break;
    case 107:
      valortotal2 = quantidade2 * 1.5;
      cout << "\nesta quantidade de Nescau da o valor de: R$" << valortotal2;
    break;
  }

  valorfinal = valortotal1 + valortotal2;
  cout << "\nvalor total a ser pago e: R$" << valorfinal;

  return 0;

  system("pause");
}