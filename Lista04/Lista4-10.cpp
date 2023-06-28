/*10. Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que:
a. Leia A e B.
b. Calcule a soma dos elementos de A.
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B.
d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.
  */
#include <iostream>
#include <string>
using namespace std;

int main() {
  const int num=5;
  int A[num]{1,2,3,4,5}, B[num]{5,4,3,2,1};
  int menu, i, soma=0, C[num], cont=0;

  do{          
    cout << "--------------------------- Menu --------------------------"      << endl;
    cout << "[1] Leia A e B." << endl;
    cout << "[2] Calcule a soma dos elementos de A." << endl;
    cout << "[3] soma dos elementos dos vetores A e B. " << endl; 
    cout << "[4] quantos elementos de A são maiores que a soma dos             elementos de B." << endl;
    cout << "-----------------------------------------------------------"      << endl;
    cin >> menu;
    system("clear");
  }while((menu < 1) && (menu > 4));
  switch(menu){
    case 1: //[1] Leia A e B.
       cout << "Vetor A: ";
      for(i = 0; i < num; i++){
        cout << A[i] << " ";
      }
      cout << "Vetor B: ";
        for(i = 0; i < num; i++){
          cout << B[i] << " ";
        }
    break;
    case 2://Calcule a soma dos elementos de A.
      for(i =0; i < num; i++){
        soma = A[i] + soma;
      }
      cout << "a soma de todos os elementos do vetor A e: " << soma;
    break;
    case 3: //Crie o vetor C contendo a soma dos elementos de mesma            posição dos vetores A e B.
        cout << "o resultado das somas dos elementos da mesma posicao dos          vetores A e B sao: ";
        for(i = 0; i < num; i++){
          C[i] = A[i] + B[i];
          cout << C[i] << " ";
        }
    break;
    case 4: //Calcule quantos elementos de A são maiores que a soma dos        elementos de B
      for(i = 0; i < num; i++){
        soma = B[i] + soma;
      }
      for(i = 0; i < num; i++){
        if(A[i] > soma){
          cont++;
        }
      }
      cout << "a quantidade de elementos de A que sao maiores que a soma         dos elementos de B sao: \t" << cont;
    break;  
  }
}