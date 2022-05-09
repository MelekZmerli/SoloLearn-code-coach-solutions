#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>
using namespace std;

int main(){
    string s,r;
    getline(cin,s);
    int w = 1;
    for(int i = 0;i < s.length();i++){
        if(s[i] == ' '){
            w++;
        }
        if(isalpha(s[i])){
            r.push_back(s[i]);
        }
    }
    cout << ceil((float)r.length()/w);
}
