#include <iostream>
using namespace std;

int main(){
  int profit;
  cin >> profit;
  profit = profit*3-21;
  if(profit < 0) cout << "Loss";
  else if(profit > 0) cout << "Profit";
  else cout << "Broke Even";
  return 0;
}
