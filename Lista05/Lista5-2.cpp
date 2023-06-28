/*2. Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A (quando for igual a A, insira um 0). Mostre os resultados. 
  */
#include <iostream>
using namespace std;
int main() {
  const int lin=30;
  const int col=30;
  int A, M[lin][col], i, j, k=0, X[lin * col], cont=0;
  //Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros.
  cout << "digite um numero inteiro: " << endl;
  cin >> A;
  cout << "digite elementos para completar um matriz: " << endl;
  //Conte quantos valores da matriz M são iguais a A.
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      cin >> M[i][j];
      if(A == M[i][j]){
        k++;
      }
    }
  }
  //Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A (quando for     igual a A, insira um 0).
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      if(A == M[i][j]){
        X[cont] = 0;
      }else{
        X[cont] = M[i][j];
      }
      cont++;
    }
  }
  //Mostre os resultados.
  cout << "a quantidade de numeros iguais na matriz e: " << " " << k << endl;
  for(i = 0; i < (lin * col); i++){
    cout << X[i] << " ";
  }
}