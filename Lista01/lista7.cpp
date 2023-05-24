#include <iostream>

using namespace std;

int main() {
 float gralC, gralF;
  cout << "adicione numero em gral celsius para comverção em Fahrenheit.\n";
  cin >> gralC;
  gralF = gralC * 9 / 5 + 32;
  cout << "convertido em" << gralF << "Fahrenheit";
  
}
