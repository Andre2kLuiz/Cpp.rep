/*12. Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.
  */
#include <iostream>
using namespace std;

int main() {
  const int num=10;
  int V[num];
  int  i, numero;
//Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados números negativos.
  
  cout << "digite elementos para compor o vetor 'V': " << endl;
  for(i = 0; i < num; i++){
    cin >> V[i];
    if(V[i] < 0){
      cout << "numero invalido digite novamente. " << endl;
      i--;
    }
  }
//Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor.Se
//existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.
  cout << "digite um numero inteiro para verificar se ele esta no vetor: " << endl;
  cin >> numero;
  for(i = 0; i < num; i++){
    if(numero == V[i]){
      cout << "o numero " << V[i] << " existe no vetor. " << endl;
      i = num;
    }else{
      i = num;
      cout << "o numero nao existe no vetor." << endl;
    }
  }
}