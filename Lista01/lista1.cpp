#include <iostream>

using namespace std;

int main() {
  int anos, meses, dias;

  cout << "digite sua idade com primeiro anos depois meses e dias: " << endl;
  cin >> anos >> meses >> dias;

  anos = anos * 365;
  meses = meses * 30;
  dias = dias + meses + anos;

  cout << "voce tem " << dias << " dias de vida." << endl;
  
}