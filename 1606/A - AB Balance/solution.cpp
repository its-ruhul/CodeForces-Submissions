#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    if(s[0] == s[n-1]) cout << s << endl;
    else {
        for(int i = 0; i < n-1; i++){
            cout << s[i];
        }
        cout << s[0] << endl;
    }
 
    return 0;
}
 
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    
    return 0;
}