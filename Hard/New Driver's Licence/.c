#include <stdio.h>
#include <string.h>
int main(){
    char name[10];
    char tmp[15];
    int agents;
    char* others[40];
    scanf("%s",name);
    scanf("%d",&agents);
    int i = 0;
    others[0] = malloc(10 * sizeof(char));
    while(scanf("%s",others[i])>0){
        i++;
        others[i] = malloc(10 * sizeof(char));
    }
    strcpy(others[i],name);
    for (int j = 0; j < i; j++){
        for(int k = j; k <= i; k++){
            if(strcmp(others[j],others[k]) > 0){
                strcpy(tmp,others[j]);
                strcpy(others[j],others[k]);
                strcpy(others[k],tmp);
            } 
        }
    }

    for (int j = 0; j <= i; j++){
        if(!strcmp(others[j],name)){
            printf("%d",j / agents * 20 + 20);
            break;
        }
    }
    return 0;
}