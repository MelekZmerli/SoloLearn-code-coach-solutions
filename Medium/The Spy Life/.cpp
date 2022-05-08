#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    for(int i = input.length();i >=0;i--){
        if(isalpha(input[i]) ||input[i] == ' '){
            cout << input[i];
        }
    }
    return 0;
}
