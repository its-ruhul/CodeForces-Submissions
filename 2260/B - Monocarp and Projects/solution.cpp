#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long x, y, k, a = 0;
    
    cin >> x >> y >> k;
    
    for(int i = 0; i < min({y, k}); i++){
        a += (y + i) % (x + i);
    }
    
    long long f = max(0LL, k-y);
    a += f * (y-x);
    
    cout << a << endl;
    
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