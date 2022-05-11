#include <iostream>
#include <string>
using namespace std;
string input;

int main(){
    getline(cin,input);
    for(int i = 0; i < input.length(); i++){
        switch(input[i]){
            case '1':
                if(input[i+1] == '0'){
                    input.insert(i+2,"ten");
                    input.erase(i,2);
                }
                else{
                    input.insert(++i,"one");
                    input.erase(--i,1);
                }
                break;
            case '2':
                input.insert(++i,"two");
                input.erase(--i,1);
                break;
            case '3':
                input.insert(++i,"three");
                input.erase(--i,1);
                break;
            case '4':
                input.insert(++i,"four");
                input.erase(--i,1);
                break;
            case '5':
                input.insert(++i,"five");
                input.erase(--i,1);
                break;
            case '6':
                input.insert(++i,"six");
                input.erase(--i,1);
                break;
            case '7':
                input.insert(++i,"seven");
                input.erase(--i,1);
                break;
            case '8':
                input.insert(++i,"eight");
                input.erase(--i,1);
                break;
            case '9':
                input.insert(++i,"nine");
                input.erase(--i,1);
                break;
            default:
                continue;
        }
    }
    cout << input;
    return 0;
}
