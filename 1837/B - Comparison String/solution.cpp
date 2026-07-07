#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, c = 1, m = 1;
    string s;
    
    cin >> n >> s;
    
    for(int i = 1; i < n; i++){
        if (s[i] == s[i-1]) c++;
        else c = 1;
 
        m = max({m, c});
    }
    
    cout << m+1 << endl;
    
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