/*17. Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo de 10; se for ímpar, escreva se é divisível por 5. 
  */
#include <iostream>

using namespace std; 

int main() {
  int numero;
  float par, impar;
  
  cout << "digite um numero: ";
  cin >> numero;

 if(numero % 2 == 0){
   par = numero / 10;
   par = par * 10;
   if(par == numero){
     cout << "o numero e par e multiplo de 10.";
   }else{
     cout << "o numero e par e nao e multiplo de 10";
   }
 }else{
   if(numero % 5 == 0){
     cout << "o numero e impar e divisivel por 5";
   }else{
     cout << "o numero e impar e não e divisivel por 5";
   }
 }
  
}