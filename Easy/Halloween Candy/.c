#include <stdio.h>
#include <math.h>

int main(){
  double houses;
  scanf("%lf",&houses);
  houses=200/houses;
  printf("%d",(int)ceil(houses));

  return 0;
}
