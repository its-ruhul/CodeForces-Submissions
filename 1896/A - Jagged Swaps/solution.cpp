#include<bits/stdc++.h>
using namespace std;
 
int solve() {
    
    int n, a;
    bool b = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        if(i == 0 && a == 1) b = 1;
    }
    
    if(b) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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