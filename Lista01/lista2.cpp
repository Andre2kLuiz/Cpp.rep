#include<iostream>

using namespace std;

int main() {
 int anosquefuma;
  float cigarrospordia, valordacarteira, anosemdias;
  cout << "a quantos anos voce fuma?\n";
  cin >> anosquefuma;
  cout << "quantos cigarros voce fuma por dia?\n";
  cin >> cigarrospordia;
  cout << "valor da carteira completa de cigarros?\n";
  cin >> valordacarteira;
  anosemdias = anosquefuma * 365;
  cout << anosemdias * cigarrospordia * valordacarteira;
}
