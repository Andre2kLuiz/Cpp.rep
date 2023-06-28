/*9. Implemente o jogo da velha usando uma matriz como tabuleiro. 
  */
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
  const int lin = 3;
  const int col = 3;
  char M[lin][col], jogada;
  int i, j, cont=0, jogadasR = lin * col;
  bool jogador, vitoria = false;

  for(i = 0; i < lin; i++){
    for(j = 0; j < col; j++){
      M[i][j] = 97 + cont ;
      cont++;
    }
  }
  do{
    cout << "\t\t\t..........TABULEIRO..........\n\n" << endl;
    cout << "\t\t\t\t  " << M[0][0] << "  " << "| " << " " << M[0][1] << " " << " | " << M[0][2] << endl;
    cout << "\t\t\t\t---------------- " << endl;
    cout << "\t\t\t\t  " << M[1][0] << "  " << "| " << " " << M[1][1] << " " << " | " << M[1][2] << endl;
    cout << "\t\t\t\t---------------- " << endl;
    cout << "\t\t\t\t  " << M[2][0] << "  " << "| " << " " << M[2][1] << " " << " | " << M[2][2] << endl;

  
    cout << "\ndigite a posicao de sua jogada: \n";
    cin >> jogada;

    system("clear");
    
    if(jogador){
      for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
          if(M[i][j] == jogada){
           M[i][j] = 'x';
            jogadasR--;
          }
        }
        jogador = false;
      }
      if(((M[0][0] == 'x') && (M[0][1] == 'x') && (M[0][2] == 'x')) || ((M[1][0] == 'x') && (M[1][1] ==         'x') && (M[1][2] == 'x')) || ((M[2][0] == 'x') && (M[2][1] == 'x') && (M[2][2] == 'x'))){
        cout << "jogador 1 ganhou!";
        vitoria = true;
      }
      if((M[0][0] == 'x') && (M[1][0] == 'x') && (M[2][0] =='x') || (M[0][1] == 'x') && (M[1][1] == 'x')        && (M[1][2] =='x') || ((M[0][2] == 'x') && (M[1][2] == 'x') && (M[2][2] =='x'))){
        cout << "jogador 1 ganhou!";
        vitoria = true;
      }
      if((M[0][0] == 'x') && (M[1][1] == 'x') && (M[2][2] == 'x') || (M[1][2] == 'x') && (M[0][2] == 'x')       && (M[2][2] == 'x') && (M[2][0])){
        cout << "jogador 1 ganhou!";
        vitoria = true;
      }
    }else{
      for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
           if(M[i][j] == jogada){
           M[i][j] = 'O';
             jogadasR--;
          }
        }
        jogador = true;
      }
      if(((M[0][0] == 'O') && (M[0][1] == 'O') && (M[0][2] == 'O')) || ((M[1][0] == 'O') && (M[1][1] ==         'x') && (M[1][2] == 'O')) || ((M[2][0] == 'O') && (M[2][1] == 'O') && (M[2][2] == 'O'))){
        cout << "jogador 2 ganhou!";
        vitoria = true;
      }
      if((M[0][0] == 'O') && (M[1][0] == 'O') && (M[2][0] =='O') || (M[0][1] == 'O') && (M[1][1] == 'O')        && (M[1][2] =='O') || ((M[0][2] == 'O') && (M[1][2] == 'O') && (M[2][2] =='O'))){
        cout << "jogador 2 ganhou!";
        vitoria = true;
      }
      if((M[0][0] == 'O') && (M[1][1] == 'O') && (M[2][2] == 'O') || (M[1][2] == 'O') && (M[0][2] == 'O')       && (M[2][2] == 'O') && (M[2][0])){
        cout << "jogador 2 ganhou!";
        vitoria = true;
      }
    }
    if(jogadasR == 0 && !vitoria){
      cout << "deu velha! empate.";
      break;
    }
  }while(vitoria == false);
}