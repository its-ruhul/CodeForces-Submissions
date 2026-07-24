#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, m = INT_MAX;
    
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]) {
            m = 0;
            break;
        }
        else {
            m = min(m, (v[i] - v[i-1])/2 + 1);
        }
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