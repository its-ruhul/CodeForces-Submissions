#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k, a, b = 0, c = 0;
    
    vector<int> v;
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < n-1; i++){
        if(v[i+1] - v[i] <= k) c++;
        else c = 0;
        
        b = max({b, c});
    }
    
    cout << n-b-1 << endl;
}
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}