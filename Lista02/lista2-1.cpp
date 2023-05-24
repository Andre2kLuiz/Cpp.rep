/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais; 
• Escaleno: tem os comprimentos dos três lados diferentes. */
#include <stdio.h>

using namespace std;

int main() {
  float x=0, y=0, z=0;
  char cump = 1;

  cout << "\n\nescreva o valor de x: ";
  cin >> x;
  cout << "\n\nescreva o valor de y: ";
  cin >> y;
  cout << "\n\nescreva o valor de z: ";
  cin >> z;

  if (x + y > z && x + z > y && y + z > x) {
  cout << "\n\nos tres lados formao um triangulo "; 
  }
  if((x == y) && (x == z) && (y == z)) { 
      cout << "\n\ntriangulo equilatero ";
    }else {
      if ((x == y) || (x == z) || (y == z)) {
      cout << "\n\ntriangulo isoceles " ; 
      }else {
      cout << "\n\ntriangulo escaleno ";
      }
    }
  }
