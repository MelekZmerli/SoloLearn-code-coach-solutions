#include <iostream>
using namespace std;

int main(){
  int yards,i;
  scanf("%d",&yards);
  if(yards>10){
    printf("High Five");
  }
  else if(yards<1){
    printf("shh");
  }
  else{
    for(i=0;i<yards;i++){
      printf("Ra!");
    }
  }
  return ;
}
