#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n;
    cin >> n;
 
    // bitset<16> b1(n);
    // bitset<16> b2(n-1);
 
    // cout <<  b1 << " " << b2 << endl;
    
    if((n & (n-1)) == 0) cout << "NO" << endl;
    else cout << "YES" << endl;
    
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