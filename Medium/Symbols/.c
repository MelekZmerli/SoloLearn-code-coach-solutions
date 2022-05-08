#include <stdio.h>
#include <string.h>
#include <ctype.h>
int maint(){
    char input[50];
    gets(input);
    for(int i = 0;i < strlen(input);i++){
        if(isalpha(input[i]) || isdigit(input[i]) || input[i] == ' '){
            printf("%c",input[i]);
        }
    }
    return 0;
}
