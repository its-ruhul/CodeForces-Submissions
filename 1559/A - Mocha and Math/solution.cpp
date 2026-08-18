#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, a = INT_MAX;
    cin >> n;
    
    vector<long long> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
 
    for(int i = 0; i < n; i++){
        a = a & v[i];
    }
    
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