#include <stdio.h>
char input[10];
int main(){
    gets(input);
    switch(input[5]){
        case 'A':
            for(int i=0;i < 5;i++){
                printf("%c",input[i]);
            }
        break;
        case 'P':
            printf("%d",input[0]-'0'+12);
            for(int i = 1;i < 4;i++){
                printf("%c",input[i]);
            }
        break;
        default:
            switch(input[6]){
                case 'A':
                    if(input[2] == '2'){
                        printf("00");
                        for(int i = 2; i < 5;i++){
                            printf("%c",input[i]);
                        }
                    }
                    else{
                        for(int i = 0;i < 6;i++){
                            printf("%c",input[i]);
                        }
                    }
                break;
                case 'P':
                    printf("%d",(input[0]-'0')*10+input[1]-'0'+12);
                    for(int i = 2;i < 5;i++){
                        printf("%c",input[i]);
                    }
                break;
                default:
                    printf("Wrong Format !");
                break;
            }
        break;
    }
    return 0;
}