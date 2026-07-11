#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, n1 = 0, n0 = 0, c = 0;
    string s;
    
    cin >> s;
    n = s.size();
    
    // cout << n << endl;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') n1++;
        else n0++;
    }
    
    // cout << ": " << n0 << " " << n1 << endl;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            
            if (n1 <= 0) break;
            n1--;
            c++;
        }
        else {
            if (n0 <= 0) break;
            n0--;
            c++;
        }
        
        // cout << n0 << " " << n1 << " " << c << endl;
    }
    
    cout << n - c << endl;
 
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