#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    gets(s);
    char* link = strchr(s,'=');
    if(link){
        puts(++link);
    }
    else{
        link = strrchr(s,'/');
        puts(++link);
    }
}