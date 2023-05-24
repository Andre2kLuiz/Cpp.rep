/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N 
motoristas: 
- O número da carteira de motorista (inteiro); 
- Número de multas; 
- O valor de cada uma das multas. 
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados (somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista que obteve o maior número de multas. 
  */
#include <iostream>

using namespace std;

int main() {
  int Ncarteira, Nmulta, cont, MnCarteira=0, cont2, cont3=0;
  float Vmulta, SoMulta=0, Mmulta=0;
  
  for(cont2=0; cont2 < 2; cont2++){
    cout <<"\n\tdigite o numero da sua carteira: ";
    cin >> Ncarteira;
    cout << "\n\tdigite o numero de multas: ";
    cin >> Nmulta;
    for(cont=0; cont < Nmulta; cont++){
      cout << "\n\tdigite o valor de cada multa: ";
      cin >> Vmulta;
      SoMulta = SoMulta + Vmulta;
      }
    if(Nmulta > cont3){
        cont3 = Ncarteira;
        
    } 
  }
    
  cout <<"\n\tvalor total arrecadado: " << SoMulta;
  cout <<"\n\tnumero da carteira do motorista com maior numero de multas: " << Nmulta;
}