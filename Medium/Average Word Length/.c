#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
    char input[100];
    char s[100];
    char *word;
    int numberOfWords = 0;
    int totLength = 0;
    gets(s);
    int j = 0;
    for(int i = 0; i < strlen(s); i++){
        if(isalnum(s[i])||s[i] == ' '){
            input[j] = s[i];
        }
        j++;     
    }
    word = strtok(input," ");
    while(word != NULL){
        numberOfWords++;
        totLength += strlen(word);
        word = strtok(NULL," ");
    }
    int res = (int)ceil((float)totLength/numberOfWords);
    printf("%d",res);
    return 0;
}