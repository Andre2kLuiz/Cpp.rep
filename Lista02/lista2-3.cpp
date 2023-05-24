/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7 
*/
#include <iostream>
using namespace std;

int main() {
  float altura;
  char genero;

  cout << "\n\ndigite sua altura ";
  cin >> altura;
  cout << "\n\ndigite seu genero 'm' para maslculino e 'f' para feminino: ";
  cin >> genero;
  if ((genero == 'm') || (genero == 'M')) {
    cout << "\n\nseu peso ideal e: " << 72.7*altura-58;
  }else {
    cout << "\n\nseu peso ideal e: " << 62.1*altura-44.7;
  }
  return 0;
}