/*18. Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, verifique e escreva se o parcelamento foi com juros ou se foi sem juros. 
  */
#include <iostream>

using namespace std;

int main() {
  float valort, valorp, quantp, cont;

  cout << "\n\ndigite o valor total da compra: ";
  cin >> valort;

  cout << "\n\ndigite o valor da parcela: ";
  cin >> valorp;

  cout << "\n\nquantas parcelas foi dividida: ";
  cin >> quantp;

  cont = valort / quantp;

  if (valorp > cont){
    cout << "\n\no parcelamento foi com juros.";
  }else{
    cout << "\n\no parcelamento foi sem juros. ";
  }
}