/*5. Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo  vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final, escreva os vetores A e B. 
  */
#include <iostream>
using namespace std;

int main() {
  //Elabore um algoritmo que leia um vetor A de 20 posições
  const int num=5;
  int A[num], i, B[num], j;

  for(i = 0; i < num; i++){
    cout << "digite um elemento de um vetor de \t" << num <<                   "\telementos\n";  
    cin >> A[i]; 
  }
  //Em seguida, trocar (armazenando em um novo  vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente
  for(j = 0; j < num; j++){
    B[j] = A[num - j - 1];
  }
  //Ao final, escreva os vetores A e B
   cout << "numeros do vetor A: ";
  for(j = 0; j < num; j++){
    cout << A[j] << " ";
  }
  cout << "numeros do vetor B: ";
  for(j = 0; j < num; j++){
    cout << B[j] << " ";
  }
}