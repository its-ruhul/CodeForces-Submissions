#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k, b = 0, m = 0;
    string s;
    
    cin >> n >> k >> s;
 
    if(k == 1) {
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                cout << 0 << endl;
                return 0;
            }
        }
 
        cout << 1 << endl;
        return 0;
    }
    
    for(int i = 0; i < k; i++){
        if(s[i] == 'B') b++;
        m = max({m, b});
    }
    
    int l = 1, r = k;
    
    while( l < n && r < n){
        
        if(s[l-1] != s[r] && s[r] == 'W'){
            b--;
        }
        else if(s[l-1] != s[r] && s[r] == 'B'){
            b++;
        }
 
        //cout << l << " " << r << " " << b << endl;
        
        l++;
        r++;
        
        m = max({m, b});
    }
    
    cout << k-m << endl;
    
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