/*8. Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. 
  */
#include <iostream>

using namespace std;

int main() {
  int numero=0, total=0;
  char letra;

  do{
  cout << "\n\tdigite um numero inteiro: ";
  cin >> numero;
  system("clear");
  }while(numero <= 0);
  do{
  cout << "\n\tdigite ('s') - para sucessor e ('a') para antecessor: ";
  cin >> letra;
  system("clear");
  }while(!(((letra == 's') || (letra == 'S')) || ((letra == 'a') || (letra == 'A'))));

  if((letra == 's') || (letra == 'S')){
    
      total = numero + (numero + 1) + (numero + 2) + (numero + 3) + (numero + 4) + (numero + 
      5) + (numero + 6) + (numero +7) + (numero + 8) + (numero + 9) + (numero + 10);
      cout << "a soma dos numeros sucessores e: " << total;
       
    }else{
      total = numero + (numero - 1) + (numero - 2) + (numero - 3) + (numero - 4) + (numero - 
      5) + (numero - 6) + (numero - 7) + (numero - 8) + (numero - 9) + (numero - 10);
      cout << "a soma dos numeros antecessores e: " << total;
    }
    
    return 0
  }