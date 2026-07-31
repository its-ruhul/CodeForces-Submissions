#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, op = 0, mf = 0;
    cin >> n;
    
    unordered_map<int, int> m;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        m[a]++;
    }
    
    for(const auto& [i, j] : m){
        mf = max(mf, j);
    }
    // cout << mf << endl;
 
    while(mf < n){
        op += 1 + mf;
        mf *= 2;
    }
    
    if(mf > n) op -= mf-n;
    
    cout << op << endl;
 
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