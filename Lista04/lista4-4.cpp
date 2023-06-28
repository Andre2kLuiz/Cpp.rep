/*4. Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
elementos. 
  */
#include <iostream>
#include<string>

using namespace std;

int main() {
//Elabore um algoritmo para ler um vetor A de 20 números inteiros
  const int num=5;
  int A[num], i, dif, Mdif=0;

  for(i=0; i < num; i++){
    cout << "\ndigite um elemento para adicionar o vetor com\t" << num       << "\tposicoes: \n";
    cin >> A[i];
    system("clear");
  }
  
  //obter a maior diferença entre dois elementos consecutivos desse vetor
  for(i=0; i < num; i++){
    dif = A[i + 1] - A[i];
    if (dif > Mdif){
      Mdif = dif;
    }
    cout << A[i] << " ";
  }
  cout << "\n A maior diferenca entre os numeros e: \t" << Mdif;
}