#include <stdio.h>

int main(){
  int i,c;
  scanf("%d",&i);
  c = (i*3)-21;
  if (c<0)
    printf("Loss");
  else if (c>0)
    printf("Profit");
  else
    print("Broke even");
  return 0;
}
