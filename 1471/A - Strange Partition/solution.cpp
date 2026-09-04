#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, a, x, c = 0, d = 0;
    cin >> n >> x;
    
    for(long long i = 0; i < n; i++){
        cin >> a;
        c += (a + x - 1) / x;
        d += a;
    }
    
    cout << (d + x - 1) / x << " " << c << endl;
    
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