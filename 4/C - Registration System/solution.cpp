#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    string s;
    int t;
    unordered_map<string, int> map;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> s;
        if (map.find(s) != map.end()){
            map[s]++;
            cout << s << map[s] << endl;
        }
        else {
            map[s] = 0;
            cout << "OK"  << endl;
        }
    }
    
    return 0;
}