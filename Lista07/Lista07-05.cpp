/*5. Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes
opções: soma, subtração, multiplicação e divisão. */
#include <iostream>
using namespace std;

void soma(int n1, int n2);
void subtracao(int n1, int n2);
void multiplicacao(int n1, int n2);
void divisao(int n1, int n2);

int main() {
  int n1, n2, resultado;
  char operador, continuar;
  bool sair = false;

  
  do{
    cout << "digite um numero: " << endl;
    cin >> n1;
    
    system("clear");
    
    cout << "qual o peracao? " << endl;
    cout << "soma '+', subtracao '-', multiplicacao '*', divisao '/'... " << endl;
    cin >> operador;

    system("clear");
    
    switch(operador){
      case '+':
        cout << "digite outro numero" << endl;
        cin >> n2;
        system("clear");
        soma(n1, n2);
      break;
      case '-':
        cout << "digite outro numero" << endl;
        cin >> n2;
        subtracao(n1, n2);
        system("clear");
      break;
      case '*':
        cout << "digite outro numero" << endl;
        cin >> n2;
        multiplicacao(n1, n2);
        system("clear");
      break;
      case '/':
        cout << "digite outro numero" << endl;
        cin >> n2;
        divisao(n1, n2);
        
      break;
      default:
      break;
    }

    cout << "\n\n\ndeseja continuar?" << endl;
    cout << "sim 's'" << endl;
    cout << "nao 'n'" << endl;
    cin >> continuar;

    if(continuar == 'n'){
      sair = true;
    }
    
  }while(!sair);
  
  cout << "operacao finalizada...";
}

void soma(int n1, int n2){
  cout << n1 + n2;
}
void subtracao(int n1, int n2){
  cout << n1 - n2;
}
void multiplicacao(int n1, int n2){
  cout << n1 * n2;
}
void divisao(int n1, int n2){
  cout << n1 / n2;
}
