#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    
    if(k * (k+1) <= 2*x && 2*x <= n * (n+1) - (n-k) * (n-k+1)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}