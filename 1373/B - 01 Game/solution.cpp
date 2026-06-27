#include<bits/stdc++.h>
using namespace std;
 
int Solve() {
    
    int c0 = 0, c1 = 0;
    
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') c0++;
        else c1++;
    }
    
    int a = min({c1, c0});
 
    if(a % 2 == 0){
        cout << "NET" << endl;
    }
    else{
        cout << "DA" << endl;
    }
    
    return 0;
}
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        Solve();
    }
    
    return 0;
}