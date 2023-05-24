#include <iostream>

using namespace std;

int main() {
  int codigo, idade, MaisVelha=0, MaisNova=1000, cont,CmaisVelho;
	
	for(cont=0; cont < 3; cont++){
	
    cout <<"\n\tdigite seu codigo: ";
    cin >> codigo;
    cout << "\n\tdigite sua idade: ";
    cin >> idade;
		
		
		if(idade > MaisVelha){
			MaisVelha = idade;
      CmaisVelho = codigo;
		}
    if(idade < MaisNova){
      MaisNova = idade;
    }	
		
	}
	
	cout << "\n\t codigo da pessoa mais velha e:  " << CmaisVelho << "\n\ta pessoa mais nova tem a idade de: " << MaisNova;	
	
}