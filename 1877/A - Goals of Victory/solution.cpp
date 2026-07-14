#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, c = 0;
    
    cin >> n;
    
    for(int i = 0; i < n-1; i++){
        cin >> a;
        
        c += a;
    }
    
    cout << -c << endl;
 
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