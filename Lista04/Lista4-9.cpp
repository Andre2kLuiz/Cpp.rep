/*9. Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P
= [2 4]. 
  */
#include <iostream>
#include <string>
using namespace std;

int main() {
  const int num=5;
  int A[num], P[num], i;

  cout << "\ndigite os elemento do vetor A: \n";
  for(i = 0; i < num; i++){
    cin >> A[i];
  }
  cout << "os elementos pares deste vetor sao: \n";
  for(i = 0; i < num; i++){
    if(A[i] % 2 == 0){
      P[i] = A[i];
      cout << P[i] << " ";
    }
  }
}
