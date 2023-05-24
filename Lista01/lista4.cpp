#include <iostream>

using namespace std;

int main() {
 float numeroI, percentual, valorporcento;
  cout << "digite um numero inteiro:\n";
  cin >> numeroI;
  cout << "digite um porcentagem:\n";
  cin >> percentual;
  valorporcento = percentual / 100;
  cout << valorporcento * numeroI;
}
