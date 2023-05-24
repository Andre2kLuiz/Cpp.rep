/*5. Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar as matrículas de todos os alunos que obtiveram médias superiores a 9. 
  */
#include <iostream>

using namespace std;

int main() {
  int matriculas, aprovado=0, reprovado=0, recuperacao=0;
  float medias;

  do{
    
    cout << "digite sua matricula: ";
    cin >> matriculas;
    cout << " digite sua media: ";
    cin >> medias;

    if(medias >=7){
      aprovado++;
    }else{
      if(medias <= 3){
        reprovado++;
      }else{
        recuperacao++;
      }
    }
  }while(medias > 0);

  cout << "numero de aprovado: \t" << aprovado << endl;
  cout << "numero de reprovados: \t" << reprovado << endl;
  cout << "numero de recuperacao: \t" << recuperacao << endl;
}