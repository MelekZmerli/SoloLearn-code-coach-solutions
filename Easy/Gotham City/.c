#include <stdio.h>

int main(){
  int crimes;
  scanf("%d",&crimes);
  if(crimes < 5){
    printf("I got this!");
  }
  else if ((crimes >= 5) && (crimes < 10)){
    printf("Help me Batman");
  }
  else{
    printf("Good Luck out there!");
  }
}
