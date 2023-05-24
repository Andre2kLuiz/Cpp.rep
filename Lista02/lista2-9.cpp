/*Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e escreva-os na ordem solicitada. 
  */

using namespace std;

int main() {
  int n1, n2, n3;
  char letra;

  cout << "\ndigite um numero inteiro: ";
  cin >> n1;
  cout << "\ndigite outro numero inteiro: ";
  cin >> n2;
  cout << "\ndigite mais um numero inteiro: ";
  cin >> n3;
  cout << "\ndigite 'c' para ordem crescente ou 'd' para ordem decrescente: ";
  cin >> letra;


  
  if((letra == 'c') || (letra == 'C')){
    if((n1 > n2) && (n1 > n3)){
      cout << n1;
    }else{
      if((n2 >= n1) && (n2 >= n3)){
        cout << n2;
      }else{
        if((n3 >= n1) && (n3 >= n2)){
          cout << n3;
        }
      }
    }
    if((n1 <= n2) && (n1 >= n3)){
      cout << n1;
    }else{
      if((n2 <= n1) && (n2 >= n3)){
        cout << n2;
      }else{
        if((n3 <= n1) && (n3 >= n2)){
          cout << n3;
        }
      }
    }
    if((n1 <= n2) && (n1 <= n3)){
      cout << n1;
    }else{
      if((n2 <= n1) && (n2 <= n3)){
        cout << n2;
      }else{
        if((n3 <= n1) && (n3 <= n2)){
          cout << n3;
        }
      }
    }
  }
  if((letra == 'd') || (letra == 'D')){
    if((n1 <= n2) && (n1 <= n3)){
      cout << n1;
    }else{
      if((n2 <= n1) && (n2 <= n3)){
        cout << n2;
      }else{
        if((n3 <= n1) && (n3 <= n2)){
          cout << n3;
        }
      }
    }
    if((n1 <= n2) && (n1 >= n3)){
      cout << n1;
    }else{
      if((n2 <= n1) && (n2 >= n3)){
        cout << n2;
      }else{
        if((n3 <= n1) && (n3 >= n2)){
          cout << n3;
        }
      }
    }
    if((n1 >= n2) && (n1 >= n3)){
      cout << n1;
    }else{
      if((n2 >= n1) && (n2 >= n3)){
        cout << n2;
      }else{
        if((n3 >= n1) && (n3 >= n2)){
          cout << n3;
        }
      }
    }
  }
}