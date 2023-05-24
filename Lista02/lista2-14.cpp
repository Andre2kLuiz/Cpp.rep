/*14. Leia 3 números inteiros e escreva uma das seguintes mensagens:
• Todos os números são iguais;
• Todos os números são diferentes;
• Apenas dois números são iguais. 
  */
#include <iostream>

using namespace std;

int main() {
  int n1, n2, n3;

  cout << "digite 3 numeros inteiros: " << endl;
  cout << "digite o primeiro" << "\t";
  cin >> n1;
  cout << "digite o segundo" << "\t";
  cin >> n2;
  cout << "digite o terceiro" << "\t";
  cin >> n3;

  if ((n1 == n2) && (n1 == n3)){
    cout << "todos os numeros sao iguais ";
  }else{
    if ((((n1 == n2) && !(n1 == n3)) || (!(n1 == n2) && (n1 == n3)))){
      cout << "apenas 2 numeros sao iguais";
    }else{
    cout << "todos ou numeros sao diferentes";
  
    }
  }
}