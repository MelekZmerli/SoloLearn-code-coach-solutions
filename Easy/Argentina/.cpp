#include <iostream>
using namespace std;

int main(){
  int pesos, dollars;
  cin >> pesos;
  cin >> dollars;
  pesos = pesos*2/100;
  if (pesos < dollars)
    cout << "Pesos";
  else
    cout << "Dollars";
  return 0;
}
