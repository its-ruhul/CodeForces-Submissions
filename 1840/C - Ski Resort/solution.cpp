#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, k, q, a;
    long long b = 0, c = 0;
    
    vector<int> v;
    
    cin >> n >> k >> q;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        if(a <= q) c++;
        else {
            v.push_back(c);
            c = 0;
        }
    }
    v.push_back(c);
    
    for(int i = 0; i < v.size(); i++){
        
        if (v[i] >= k){
            b += (v[i] - k + 1) * (v[i] - k + 2) / 2;
        }
        
        // cout << v[i] << " " << b << endl;
    }
    
    cout << b << endl;
    
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