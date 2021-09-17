#include <stdio.h>

int main(){
  double paint;
  scanf("%lf",&paint);
  paint = paint*5+40;
  paint += paint/10;
  printf("%d",(int)ceil(paint));
  return 0;
}
