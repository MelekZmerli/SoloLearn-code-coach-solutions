#include <iostream>
using namespace std;

int main(){
  string msg,rev;
  cin >> msg;
  for(int i=msg.length()-1;i>=0;i--){
    rev+=msg[i];
  }
  cout << rev;
  return 0;
}
