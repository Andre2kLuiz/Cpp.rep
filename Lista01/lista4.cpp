/*4. Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número. */
#include <iostream>

using namespace std;

int main() {
  int N;
  float porcento;
 
  cout << "digite um numero inteiro: " << endl;
  cin >> N;

  cout << "digite quantos por centos voce quer: " << endl;
  cin >> porcento;

  porcento = (porcento / 100) * N;

  cout << "o valor em porcento do numero e: " << porcento;

  return 0;
}
