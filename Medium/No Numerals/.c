#include <stdio.h>
#include <string.h>
char input[100];

int main(){
    gets(input);
    for(int i = 0; i < strlen(input); i++){
        switch(input[i]){
            case '1':
                if(input[i+1] == '0'){
                    printf("ten");
                    ++i;
                    break;
                }
                else{
                    printf("one");    
                    break;
                }
            case '2':
                printf("two");    
                break;
            case '3':
                printf("three");
                break;
            case '4':
                printf("four");
                break;
            case '5':
                printf("five");
                break;
            case '6':
                printf("six");
                break;
            case '7':
                printf("seven");
                break;
            case '8':
                printf("eight");
                break;
            case '9':
                printf("nine");
                break;
            default:
                printf("%c",input[i]);
                break;
        }
    }

    return 0;
}