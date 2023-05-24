/*4. Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6. 
  */
#include <iostream>

using namespace std;

int main() {
  int numero, cont=1, cont2=0;

  cout << "\n\tdigite um numero inteiro positivo: ";
  cin >> numero;

  while(cont < numero){
    if(numero % cont == 0){
      cont2 += cont;
    } 
    cont++;
  }
  
  if(cont2 == numero){
    cout << "\t\to numero\t" << cont2 << "\te perfeito";
  }else {
    cout << "\t\tO numero " << numero << " nao e perfeito." << endl;
  }
  
}