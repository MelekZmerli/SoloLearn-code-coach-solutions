#include <stdio.h>

int main(){
  int len,sum,s;
  scanf("%d",&len);
  for(int i = 0;i < len;i++){
    scanf("%d",&s);
    if(s%2 == 0){
      sum += s;
    }
  }
  printf("%d",sum);
  return 0;
}
