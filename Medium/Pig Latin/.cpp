#include <iostream>
using namespace std;

int main(){
  string in, res = "";
  while(cin >> in){
    res += in.substr(1)+in[0]+"ay ";
  }
  cout << res;
  return 0;
}
