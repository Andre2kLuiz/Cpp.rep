/*20. Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos pagam R$ 100 mais um adicional conforme a seguinte tabela:
• Crianças com menos de 10 anos pagam R$80;
• Conveniados com idade entre 10 e 30 anos pagam R$50;
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;
• Conveniados com mais de 60 anos pagam R$130. 
  */
#include <iostream>

using namespace std;

int main() {
  int idade, pagamento;

  cout << "\ndigite sua idade: ";
  cin >> idade;

  pagamento = 100;

  if (idade < 10){
    pagamento = pagamento + 80;
    cout << "o valor do plano de saude a ser pago e: " << pagamento << "R$";
  }else{
    if ((idade == 10) || (idade <= 30)){
      pagamento = pagamento + 50;
      cout << "o valor do plano de saude a ser pago e: " << pagamento << "R$";
    }else{
      if ((idade == 31) || (idade <= 60)){
        pagamento = pagamento + 95;
        cout << "o valor do plano de saude a ser pago e: " << pagamento << "R$";
      }else{
        if (idade > 60){
          pagamento = pagamento + 130;
          cout << "o valor do plano de saude a ser pago e: " << pagamento << "R$";
        }
      }
    }
  }
}