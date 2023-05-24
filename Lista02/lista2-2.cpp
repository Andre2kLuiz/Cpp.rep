/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo. */
#include <iostream>
using namespace std;

int main() {
  int num=0;
  cout << "digite um numero: ";
  cin >> num;
  
  if (num % 2 == 0) {
    if (num > 100) {
     cout << "\n\nnumero par e maior que 100 "; 
    }else {
     cout << "\n\nnumero par e menor que 100 ";
    }
    
  }else { 
    if(num >= 0) {
      cout << "\n\nnumero e impar e positivo ";
    }else {
      cout << "\n\nnumero e impar e negativo ";
    }
    
  }
  return 0;
} 
  

