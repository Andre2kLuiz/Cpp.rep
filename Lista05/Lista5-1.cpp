/*1. Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V. 
  */
#include <iostream>
using namespace std;
int main() {
  const int lin=3;
  const int col=3;
  int M[lin][col], i, j, A, k=0, V[9];

  cout << "digite elementos para para completar a matriz:  " << endl;
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      cin >> M[i][j];
    }
  }
  cout <<  " digite um valor para multiplicar pela matriz incerida: " << endl;
  cin >> A;
  
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      V[k] = M[i][j] * 2;
      k++;
    }
  }
  cout << "o vetor V recebeu: ";
  for(i = 0; i < (lin * col); i++){
  cout << V[i] << " ";
  }
}