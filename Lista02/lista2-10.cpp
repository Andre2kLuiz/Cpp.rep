/*10. A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. 
  */

#include<iostream>

using namespace std;

int main() {
  float laboratorio, semestre, final, media;
  
  cout << "\n\tdigite sua nota do trabalho do laboratorio: ";
  cin >> laboratorio;
  cout << "\n\tdigite sua nota da avaliação semestral: ";
  cin >> semestre;
  cout << "\n\tdigite sua nota do exame final: ";
  cin >> final;

  media = laboratorio + semestre + final;

  if((media >= 0) && (media <= 2.9)){
    cout << "Reprovado";
  }else{
    if((media >= 3) && (media <= 4.9)){
      cout << "recuperacao";
    }else{
      cout << "aprovado";
    }
  }
}