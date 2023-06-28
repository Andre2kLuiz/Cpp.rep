/*11. Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos pares e impares.
  */
#include <iostream>
using namespace std;

int main() {
  const int num=20;
  int A[num];
  int  i, SomaP=0, SomaI=0;
//Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os elementos a partir da multiplicação do seu índice por 2.
  for(i = 0; i < num; i++){
    A[i] = i * 2;
  }
  //Em seguida, calcule e escreva a soma dos elementos pares e impares.
  cout << "soma dos elementos pares do vetor: " << endl;
  for(i = 0; i < num; i++){
    if(A[i] % 2 == 0){
      SomaP = SomaP + A[i];
    }
  }
  cout << SomaP << " " << endl;
  
  cout << "soma dos elementos impares do vetor: " << endl;
  for(i = 0; i < num; i++){
    if(A[i] % 2 != 0){
      SomaI = SomaI + A[i];
    }
  }
  cout << SomaI << " " << endl;
}