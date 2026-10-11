#include<bits/stdc++.h>
using namespace std;
 
 
int solve(){
    
    long long n, k, c = 0, m = 0, ans = 0;
    cin >> n >> k;
    long long l = k;
    
    vector<long long> a(n);
    vector<long long> b(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    for(int i = 0; i < n; i++){
        
        if(k-i-1 < 0) break;
        
        c += a[i];
        m = max({m, b[i]});
        
        ans = max({ans, c + m * (k-i-1)});
    }
    
    cout << ans << endl;
    
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