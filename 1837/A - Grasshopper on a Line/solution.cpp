#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int x, k;
    
    cin >> x >> k;
    
    if(x % k != 0) cout << 1 << endl << x << endl;
    else cout << 2 << endl << x-1 << " " << 1 << endl;
    
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