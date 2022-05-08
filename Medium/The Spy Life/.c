#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char input[50];
    gets(input);
    for(int i = strlen(input);i >=0;i--){
        if(isalpha(input[i]) ||input[i] == ' '){
            printf("%c",input[i]);
        }
    }
    return 0;
}
