#include <iostream>
using namespace std;

int main(){
  int crimes;
  cin >> crimes;
  if(crimes < 5) cout >> "I got this!";
  else if((crimes >= 5) && (crimes < 10)) cout >> "Help me Batman";
  else cout >> "Good Luck out there!";
  return 0;
}
