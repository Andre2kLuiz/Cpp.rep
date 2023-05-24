#include <iostream>

using namespace std;

int main() {
 float custofabrica, custoconsumidor, imposto, distribuidor;
  cout << "valor do custo de fabrica do carro:\n";
  cin >> custofabrica;
  imposto = custofabrica * 0.28;
  distribuidor = custofabrica * 0.45;
  custoconsumidor = imposto + distribuidor + custofabrica;
  cout << "O custo final do carro para consumidor\n" << custoconsumidor;
  
}
