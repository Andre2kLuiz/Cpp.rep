#include<iostream>

using namespace std;

int main() {
 int anos, meses, dias, anosemdias, mesesemdias;
  cout << "Quantos anos voc� tem?\n";
  cin >> anos;
  cout << "em que m�s voc� nasceu?\n";
  cin >> meses;
  cout << "Em que dia voc� nasceu?\n";
  cin >> dias;
  anosemdias = anos * 365;
  mesesemdias = meses * 30;
  cout << "sua idade em dias �:\n";
  cout << anosemdias + mesesemdias + dias;
}
