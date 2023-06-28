#include <iostream>
using namespace std;

int main(){
  const int num=5;
  int A[num], B[num], C[num], i;

  for(i = 0; i < num; i++){
    cout << "\ndigite valores para o vetor A: \t" << endl; 
    cin >> A[i];
  }
  for(i = 0; i < num; i++){
    cout << "\ndigite valores para o vetor B: \t" << endl; 
    cin >> B[i];
  }
  cout << "o valor da multiplicação dos vetores e: \n" << endl; 
  for(i = 0; i < num; i++){
    C[i] = A[i] * B[i];
    cout << C[i] << " ";
  }
}                   