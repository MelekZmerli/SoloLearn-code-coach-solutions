#include <iostream>
#include <string>
using namespace std;
int main(){
        string a="abcdefghijklmnopqrstuvwxyz";
        string msg;
       
       string nm="";
       while(cin >> msg){
        for(int i=0;i<msg.length();i++){
          char c=  (char)tolower(msg[i]);
            if (a.find(a[i])!=-1)
        nm+=a[a.length()-1-a.find(c)];
            else nm+=" ";
       
    }
    nm+=" ";
    }
    cout <<nm;
    return 0;
}