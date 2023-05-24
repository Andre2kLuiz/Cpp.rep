/*6. Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas.
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro do algoritmo e não estará visível para o usuário.
  */
#include <iostream>

using namespace std;

int main() {
  int numeroS, numero, cont;

  cout << "digite um numero entra [1] e [10]: " << endl;
  cin >> numeroS;
  system("clear");

  for(cont=3; cont >= 0; cont--){
    if(cont != 0){
      cout << "tente adivinhar o numero secreto: " << endl;
      cin >> numero;
      if(numero != numeroS){
        cout << "voce errou tente novamente" << endl;
        if(numero < numeroS){
          cout << "o numero e maior que isso" << endl;
        }else{
          if(numero > numeroS){
            cout << "o numero e menor que isso" << endl;
          }
        }
      }else{
        cout << "voce ganhou" << endl;
        cont = 0;
      }
    }else{
      cout << "suas tentativas acabaram voce perdeu";
    }
  }  
}