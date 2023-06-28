/*3. Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta função em um programa que lê n1 e n2 do usuário e imprime a soma.*/
#include <iostream>

using namespace std;

int numerosint(int n1, int n2);

int main() {
  int n1, n2, soma;

  cout << "digite dois numeros: " << endl;
  cin >> n1 >> n2;

  soma = numerosint(n1, n2);

  cout <<  "a soma do intervalo entre estes numeros e: " << soma;
}

int numerosint(int n1, int n2){
  int i, soma=0;
  if(n1 < n2){
    for(i = n1+1; i < n2; i++){
      soma = soma + i;
    }
  }else{
    for(i = n1-1; i > n2; i--){
      soma = soma + i;
    }
  }
  return soma;
}
