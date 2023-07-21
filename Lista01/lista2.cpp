/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
uma carteira. */
#include<iostream>

using namespace std;

int main() {
 float ValorCarteira, AnosFuma, FumadoPdia,  dinheiroGasto;

 cout << "digite a quantos anos voce fuma: " << endl;
 cin >> AnosFuma;

 cout << "digite quantas carteiras cigarros voce fuma por dia: " << endl;
 cin >> FumadoPdia;

 cout << "digite quanto e o valor da carteira: " << endl;
 cin >> ValorCarteira;

dinheiroGasto = (AnosFuma * 365) * (ValorCarteira * FumadoPdia);

cout << "o dinheiro gasto ate agora por voce foi: " << dinheiroGasto << endl;


}
