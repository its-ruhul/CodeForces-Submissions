#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, m = 0;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
 
    for(int i = 0; i < n-1; i++){
        m = max({m, v[n-1] - v[i]});
    }
 
    for(int i = 1; i < n; i++){
        m = max({m, v[i] - v[0]});
    }
 
    for(int i = 0; i < n-1; i++){
        m = max({m, v[i] - v[i+1]});
    }
 
    cout << m << endl;
 
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