#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
char s[10];
int day,year;
const char* months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main(){
    cin >> s;
    if( strchr(s,'/')){ // MM/DD/YYYY format
        int month;
        sscanf(s,"%d/%d/%d",&day,&month,&year);
        cout << month << '/' << day << '/' << year;
    }
    else{   // Month Day, Year format
        string month;
        char c;
        cin >> day;
        cin >> c; // for ,
        cin >> year;
        cout << day << '/';
        
        for (int i = 0; i < 3; i++){
            month.push_back(s[i]);
        }
        for (int i = 0; i < 12; i++){
            if(months[i] == month){
                cout << ++i;
                break;
            }
        }
        cout << '/' << year;
    }
    return 0;
}