#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  string msg;
  cin >> msg;
  if(count(msg.begin(),msg.end(),'.') == 2)
    cout << msg.substr(32,msg.length());
  else
    cout << msg.substr(17,msg.length());
  return 0;
}
