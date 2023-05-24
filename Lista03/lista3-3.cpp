/*3. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja maior que Chico. 
  */
#include <iostream>

using  namespace std;

int main() {
  float AlturaChico=1.50, AlturaJuca=1.10;
  int anos=0;

  while(AlturaJuca <= AlturaChico){
    AlturaChico += 0.02;
    AlturaJuca += 0.03;
    anos ++;
  }
  cout << "\n\ta quantidade de anos que juca precisa para que seja maior que chico e: " << anos;
}