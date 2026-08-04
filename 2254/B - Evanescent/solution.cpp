#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n;
    bool b = 0;
    bool c = 0;
    string s, a1 = "";
 
    cin >> n >> s;
 
    for(int i = 1; i < n-1; i++){
        if(s[i-1] == s[i+1] && s[i] != s[i+1]){
            b = 1;
            break;
        }
    }
 
    for(int i = 1; i < n-1; i++){
        if(s[i-1] != s[i] && s[i] != s[i+1]){
            c = 1;
            break;
        }
    }
 
    for(int i = 0; i < n; i++){
        if (s[i] != s[i+1]){
            a1 = a1 + s[i];
        }
    }
 
    // cout << a1 << " ";
 
    if (b == 1) cout << a1.size() - 2 << endl;
    else if (c == 1) cout << a1.size() - 1 << endl;
    else cout << a1.size() << endl;
 
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