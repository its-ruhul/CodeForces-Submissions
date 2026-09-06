#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, a;
    cin >> n;
    
    map<long long, long long> m;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        m[a]++;
    }
    
    for(const auto& [i,j] : m){
        
        // cout << i << " : " << j << endl; 
        if(j > 1) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
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