#include <iostream>

using namespace std;

int main() {
 int segundosE, minutos, horas, resto, segundos;
  cout << "quantos segundos voce correu?\n";
  cin >> segundosE; 
  horas  = segundosE / 3600;
  resto = segundosE % 3600;
  minutos = resto / 60;
  segundos = resto % 60;
  cout << "voce correu:\n" << horas << "horas\n" << minutos << "minutos\n" << segundos << "segundos.\n";
  
}
