/*8. Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros), e escreva um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B. 
  */
#include <iostream>
#include <string>
using namespace std;

int main() {
  const int num=5;
  int A[num], B[num], C[num], i, j;

  cout << "\ndigite os elemento do vetor A: \n";
  for(i = 0; i < num; i++){
    cin >> A[i];
  }
  cout << "\ndigite os elmentos do vetor B: \n";
  for(i = 0; i < num; i++){
    cin >> B[i];
  }
  for(i = 0; i < num; i++){
    for(j = 0; j < num; j++){
      if(B[j] == A[i]){
        C[i] = B[j];
        cout << C[i] << " ";
      }
    }
  }
}