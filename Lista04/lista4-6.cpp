/*6. Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final, escreva o vetor A modificado.  
  */
#include <iostream>
using namespace std;

int main() {
  //Elabore um algoritmo que leia um vetor A de 20 posições
  const int num=5;
  int A[num], i, B[num];

  for(i = 0; i < num; i++){
    cout << "digite um elemento de um vetor de \t" << num <<                   "\telementos\n";  
    cin >> A[i]; 
  }
  //Em seguida, trocar o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente
  for(i = 0; i < num; i++){
    B[i] = A[num - i - 1];
  }
  for(i = 0; i < num; i++){
    A[i] = B[i];
  }
  for(i = 0; i < num; i++){
    cout << A[i] << " ";
  }
}