#include <stdio.h>

int main(){
  int pts, gun;
  scanf("%d",&pts);
  scanf("%d",&gun);
  if(pts/12 >= gun){
    printf("Buy it!");
  }
  else{
    printf("Try again");
  }
  return 0;
}
