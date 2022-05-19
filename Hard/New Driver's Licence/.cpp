#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
string name;
string others;
int agents;
vector<string> candidates;

int main(){
    cin >> name;
    cin >> agents;
    cin.ignore();
    getline(cin,others);
    stringstream ostream(others);
    string candidate;
    while (getline(ostream,candidate,' ')){
        candidates.push_back(candidate);
    }
    candidates.push_back(name);

    sort(candidates.begin(),candidates.end());
    int order = distance(candidates.begin(),find(candidates.begin(),candidates.end(),name));
    
    cout << (order / agents) * 20 + 20;
    
    return 0;

}