#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, b;
    cin >> n >> a >> b;
    
    if( a + b < n-1 || a == n && b == n){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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