#include <iostream>
using namespace std;
string f;
bool money = false;
bool thief = false;
int main(){
    getline(cin,f);
    for(int i = 0;i < f.length();i++){
        if(f[i] == '$'){
            if(thief){
                cout << "ALARM";
                return 0;
            }
            money = true;
        }
        else if(f[i] == 'T'){
            if(thief){
                cout << "ALARM";
                return 0;
            }
            thief = true;
        }
        else if(f[i] == 'G'){
            thief = false;
            money = false;
        }
    }
    cout << "quiet";
    return 0;
}