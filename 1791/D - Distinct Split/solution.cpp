#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, cp = 0, cs = 0;
    string s;
    
    bool b = 0;
    
    cin >> n >> s;
    
    vector<int> pd(n);
    vector<int> sd(n);
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < i; j++){
            if(s[i] == s[j]){
                b = 1;
                break;
            }
        }
        
        if (b == 1) pd[i] = cp;
        else pd[i] = ++cp;
        
        b = 0;
    }
    
    for(int i = n-1; i >= 0; i--){
        
        for(int j = n-1; j > i; j--){
            if(s[i] == s[j]){
                b = 1;
                break;
            }
        }
        
        if ( b == 1) sd[i] = cs;
        else sd[i] = ++cs;
        
        b = 0;
    }
    
    // for(int i = 0; i < n; i++){
    //     cout << pd[i] << " ";
    // }
    // cout << endl;
    
    // for(int i = 0; i < n; i++){
    //     cout << sd[i] << " ";
    // }
    // cout << endl;
    
    int m = 0;
    for(int i = 0; i < n-1; i++){
        m = max({m, pd[i] + sd[i+1]});
    }
    cout << m << endl;
    
    
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