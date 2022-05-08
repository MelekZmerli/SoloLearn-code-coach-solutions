#include <stdio.h>
#include <string.h>
 int main(){
     char input[30];
     char* word;
     gets(input);
     word = strtok(input," ");
     while(word != NULL){
         printf("%s%cay ",++word,word[0]);
         word = strtok(NULL," ");
     }
     return 0;
 }