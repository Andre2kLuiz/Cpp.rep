#include <iostream>

using namespace std;

int main() {
 float reais, dolar, cotacao, valor, dolarR;
  cout << "digite o valor em dolar para ser convertido em reais.\n";
  cin >> dolar;
  cout << "digite a cotaçao do dolar.\n";
  cin >> cotacao;
  reais = dolar * cotacao;
  cout << "o valor em reais é:\n" << reais;
  cout << "\nquanto gostaria de converter?\n";
  cin >> dolarR;
  cout << dolarR * cotacao;
  
}
