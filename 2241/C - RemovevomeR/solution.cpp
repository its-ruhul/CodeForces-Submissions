#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, c = 0;
    string s;
    
    cin >> n >> s;
    
    // cout << n << " " << s << endl;
    
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]) c++;
    }
    
    // cout << c << " ";
    
    if(c == 1) cout << 2 << endl;
    else cout << 1 << endl;
    
    
    
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