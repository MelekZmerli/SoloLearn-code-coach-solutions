#include <stdio.h>

int main(){
  int yrds,i=0;
  scanf("%d",&yrds);
  if(yrds > 10){
    printf("High Five");
  }
  else if(yrds >= 1){
    while(yrds>=1){
      printf("Ra!");
      i++;
    }
  }
  else printf("shh");
  return 0;
}
