#include <stdio.h>
#include <string.h>

int main(){
  char *input;
  scanf("%s",input);
  char *token;
  char out[100];
  while((token = strtok_r(input," ",&input))){
    switch(token[0]){
      case 'G':
        strcat(out,"Lion ");
        break;
      case 'R':
        strcat(out,"Tiger ");
        break;
      case 'C':
        strcat(out,"Bird ");
        break;
      case 'S':
        strcat(out,"Snake ");
        break;
    }
    scanf("%s",input);
  }
  printf("%s",out);
  return 0;
}
