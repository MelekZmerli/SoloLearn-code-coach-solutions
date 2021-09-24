#include <iostream>
#include <string.h>
using namespace std;

int main(){
  string input;
  string out = "";
  while(cin >> input){
    for(int i = 0;i < input.length();i++){
      switch(input[i]){
        case 'G':
          out += "Lion ";
        case 'R':
          out += "Tiger ";
        case 'C':
          out += "Bird ";
        case 'S':
          out += "Snake ";
          break;
      }
    }
  }
  cout << out;
  return 0;
}
    
