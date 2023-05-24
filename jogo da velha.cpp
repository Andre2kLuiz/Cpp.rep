#include<iostream>

using namespace std;

int main (){
	int  i, j;
	char vetor[2][2];
	
	
	cout << "\n\t              jogo da velha";
	cout << "\n\t\t" << vetor[0][0] << "|" << vetor[0][1] << "|" << vetor[0][2];
	cout << "\n\t _________________";
	cout << "\n\t\t" << vetor[1][0] << "|" << vetor[1][1] << "|" << vetor[1][2];
	cout << "\n\t _________________";
	cout << "\n\t\t" << vetor[2][0] << "|" << vetor[2][1] << "|" << vetor[2][2];
}

