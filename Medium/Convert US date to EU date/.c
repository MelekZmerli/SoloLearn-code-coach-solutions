#include <stdio.h>
#include <string.h>

char s[10];
int day,year;
const char* months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main(){
    scanf("%s",s);
    if( strchr(s,'/')){ // MM/DD/YYYY format
        int month;
        sscanf(s,"%d/%d/%d",&month,&day,&year);
        printf("%d/%d/%d",day,month,year);
    }
    else{   // Month Day, Year format
        char month[4];
        scanf("%d",&day);
        printf("%d",day);

        for (int i = 0; i < 3; i++){
            month[i] = s[i];
        }
        for (int i = 0; i < 12; i++){
            if(!strcmp(months[i],month)){
                printf("%d",++i);
                break;
            }
        }
        scanf("%s",s); // for ,
        scanf("%s",s); // for year
        print("/%s",s);
    }
    return 0;
}