#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int houses;
  float dollar,intpart,fractpart;
  
  cin >> houses;
  dollar = (float)2/houses*100;
  houses = (int)dollar;
  fractpart = modf(dollar,&intpart);
  if (fractpart>0){
    cout << houses +1;
  }
  else
    cout << houses
}
