/*11. Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número inválido”. 
  */
#include <iostream>

using namespace std;

int main() {
  int numero, resultado1, r2, r3, r4, r5;

  cout << "\n\tdigite um numero inteiro com ate '5' digitos: ";
  cin >> numero;

  if ((numero <= 99999) && (numero > 0)){
    resultado1 = numero / 10000;
    r2 = numero / 1000;
    r2 = r2 % 10;
    r3 = numero / 100;
    r3 = r3 % 10;
    r4 = numero / 10;
    r4 = r4 % 10;
    r5 = numero % 10000;
    r5 = r5 % 10;
    cout << resultado1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;
    cout << r5 << endl;

    cout << resultado1 + r2 + r3 + r4 + r5;
  }else{
    cout << "“Número inválido”.";
  }
  return 0; 
}