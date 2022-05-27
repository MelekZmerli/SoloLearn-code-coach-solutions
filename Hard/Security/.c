#include <stdio.h>
#include <stdbool.h>
char f[30];
bool money = false;
bool thief = false;

int main(){
    gets(f);
    for(int i = 0;i < strlen(f); i++){
        if(f[i] == '$'){
            if(thief){
                printf("ALARM");
                return 0;
            }
            money = true;
        }
        else if(f[i] == 'T'){
            if(money){
                printf("ALARM");
                return 0;
            }
            thief = true;
        }
        else if(f[i] == 'G'){
            thief = false;
            money = false;
        }
    }
    printf("quiet");
    return 0;
}