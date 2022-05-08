#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string msg;
    while(cin >> msg){
        for(int i = 0;i<msg.length();i++){
            if(count(begin(msg),end(msg),msg[i])){
                cout << "Deja Vu";
                return 0;
            }
        }
    }
    cout << "Unique";
}