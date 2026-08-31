#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, k, c = 0;
    cin >> n >> k;
    
    vector<long long> v(n * k);
    
    for(long long i = 0; i < n * k; i++){
        cin >> v[i];
    }
 
    for(long long i = 1; i <= k; i++){
        c += v[n*k - i * (n/2 + 1)];
    }
    
    cout << c << endl;
    
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