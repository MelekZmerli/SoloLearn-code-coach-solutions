#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    gets(s);
    for(int i = 0;i<strlen(s);i++){
        for(int j =(i+1);j<strlen(s);j++){
            if(s[i] == s[j]){
                printf("Deja Vu");
                return 0;
            }
        } 
    }
    printf("Unique");
    return 0;
}