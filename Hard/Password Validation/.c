#include <stdio.h>

char password[20];
int numbers = 0, symbols = 0;

int main(){
    gets(password);
    for(int i = 0; i < strlen(password);i++){
        if(isdigit(password[i])){
            numbers++;
        }
        else if(!isalpha(password[i])){
            symbols++;
        }
    }
    if(strlen(password) > 7 && numbers > 1 && symbols > 1){
        printf("Strong");
    }
    else{
        printf("Weak");
    }
    return 0;
}