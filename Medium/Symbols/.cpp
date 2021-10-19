#include <iostream>
using namespace std;

int main(){
  char sym[7] = {'@','#','$','/','&','%','*'};
  string msg, res ="";
  while(cin >> msg){
    for(int i = 0;i < msg.length();i++){
      if(count(begin(sym),end(sym),msg[i]) > 0)
        continue;
      rs += msg[i];
    }
    rs += ' ';
  }
  cout << rs;
  return 0;
}
