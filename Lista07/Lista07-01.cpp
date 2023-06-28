#include <iostream>

using namespace std;

float obtermaiornota(float tb1, float tb2);
float caucularmedia(float tb1, float tb2, float prv1, float prv2);

int main() {
  float tb1, tb2, prv1, prv2, maiorndp, maiorndt; /*Elabore um algoritmo que, dadas as quatro notas de um aluno, informe a sua média.*/

  cout << "digite as notas dos trabalhos e das provas: " << endl;
  cin >> tb1 >> tb2 >> prv1 >> prv2;

  float media = caucularmedia(tb1, tb2, prv1, prv2);

  cout << "media do aluno e: " << media;
  
}

float obtermaiornota(float tb1, float tb2){
  return (tb1 > tb2) ? tb1 : tb2;
}

float caucularmedia(float tb1, float tb2, float prv1, float prv2){
  float maiornotatrabalho = obtermaiornota(tb1, tb2);
  float maiornotaprova = obtermaiornota(prv1, prv2);
  return (maiornotatrabalho + maiornotaprova)/2;
}
