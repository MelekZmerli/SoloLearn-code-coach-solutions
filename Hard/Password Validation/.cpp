#include <iostream>
using namespace std;

string s;
int numbers = 0,symbols = 0;

int main(){
    getline(cin,s);
    for(int i = 0;i < s.length();i++){
        if(isdigit(s[i])){
            numbers++;
        }
        else if(!isalpha(s[i])){    // a symbol is neither a digit nor a alphabetical letter
            symbols++;
        }
    } 
    
    if(s.length() > 7 && numbers > 1 && symbols > 1){
        cout << "String";
    }
    else{
        cout << "Weak";
    }
    return 0;
}