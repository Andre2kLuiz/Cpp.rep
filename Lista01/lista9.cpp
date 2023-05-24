#include <iostream>

using namespace std;

int main() {
 int var1, var2;
  cout << "digite em ordem, primeiro numero:\n";
  cin >> var1;
  cout << "digite o segundo numero:\n";
  cin >> var2;
  cout << "numeros em ordem:\n" << var1 << "e" << var2;
cout << "\ntrocando de lugar fica:\n" << var1 + var2 - var1 << "\n" << var2 + var1 - var2;
