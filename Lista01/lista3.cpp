#include <iostream>

using namespace std;

int main() {
 float compra, parcelas;
  cout << "valor da compra:\n";
  cin >> compra;
  cout << "voc� pode dividir em ate 10X, quantas parcelar quer?\n";
  cin >> parcelas;
  cout << compra / parcelas;
}
