#include <iostream>
using namespace std;

int main(){
  int n,sum = 0;
  cin >> n;
  int t[n];
  for(int i = 0;i < n;i++){
    cin >> t[i];
    if(t[i]%2 == 0){
      sum += t[i];
    }
  cout << sum;
  return 0;
}
