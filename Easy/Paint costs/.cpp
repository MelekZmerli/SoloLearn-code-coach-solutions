#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float colors;
  cin >> colors;
  colors = colors*5+40;
  cout << (int)ceil(colors+colors/10);
  return 0;
}
