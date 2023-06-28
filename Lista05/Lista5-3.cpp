/*2. Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz.
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz M  
  */
#include <iostream>
using namespace std;
int main() {
  const int lin=5;
  const int col=5;
  int M[lin][col], i, j;
  int SomaLinha4=0;
  int SomaColuna2=0;
  int SomaDiagonalP=0;
  int SomaDiagonalS=0;
  //Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo
  cout << "digite os elementos de uma matriz: " << endl; 
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      cin >> M[i][j];
    }
  }
  //a) da linha 4 de M
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      if(i == 3){
        SomaLinha4 = M[i][j];
      }

      if(j == 1){
        SomaColuna2 = M[i][j];
      }

      if(i == j){
        SomaDiagonalP = M[i][i];
      }

      if(i + j == 4){
        SomaDiagonalS = M[i][j];
      }
    }
  }
  cout << "soma da linha 4 de M e: \t\t" << SomaLinha4 << endl;
  cout << "soma da coluna 2 de M e: \t\t" << SomaColuna2 << endl;
  cout << "soma da diagonal principal e: \t\t" << SomaDiagonalP << endl;
  cout << "soma da diagonal secundária e: \t\t" << SomaDiagonalS << endl;

  cout << "\n e a matriz completa e: \n";
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      if(i == 0){
        cout << M[i][j] << " ";
      }
      if(i == 1){
        cout << M[i][j] << " ";
      }
      if(i == 2){
        cout << M[i][j] << " ";
      }
      if(i == 3){
        cout << M[i][j] << " ";
      }
      if(i == 4){
        cout << M[i][j] << " ";
      }
      
    } 
  }
}