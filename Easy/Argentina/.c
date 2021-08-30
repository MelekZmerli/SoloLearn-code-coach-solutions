#include <stdio.h> 

int main(){
  int pesos, dollars;
  scanf("%d",&pesos);
  scanf("%d",&dollars);
  pesos=pesos*2/100;
  if(pesos<dollars)
    printf("Pesos");
  else
    printf("Dollars");
  return 0;
}
