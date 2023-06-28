/*5. Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das 12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada. 

  */
#include <iostream>
using namespace std;
int main() {
  const int lin = 3;
  const int col = 4;
  int M[lin][col], i, j, l, m,  Melemento=0;

  cout << "digite elementos para matriz: " << endl; //leia uma matriz M(12,13) e multiplique      todos os 13 elementos de cada uma das 12 linhas de M pelo maior elemento daquela linha
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      cin >> M[i][j];
      system("clear");
    }
  }
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      if(M[i][j] > 9){
        cout << M[i][j] << " ";
      }else{
        cout << M[i][j] << "  ";
      }
    }
    cout << endl;
  }
  
  for(i = 0; i < lin; i++){
    Melemento = M[i][0];
    for(j = 1; j < col; j++){
      if(M[i][j] > Melemento){
        Melemento = M[i][j];
      }
    }
    for(j = 0; j < col; j++){
      M[i][j] *= Melemento;
    }
  }

  cout << "------------" << endl;
  
  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      if(M[i][j] > 9){
        cout << M[i][j] << " ";
      }else{
        cout << M[i][j] << "  ";
      }
    }
    cout << endl;
  }
}