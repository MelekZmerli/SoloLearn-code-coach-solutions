#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char* a = "abcdefghijklmnopqrstuvwxyz";
    char msg[100];
    char nm[100];
    gets(msg);
    for(int i = 0; i <strlen(msg);i++){
        char c = tolower(msg[i]);
        if(isalpha(c)){
            printf("%c",a[strlen(a)-1-(strchr(a,c)-a)]);
        }
        else{
            printf(" ");
        }
    }
    printf("");
    return 0;
}