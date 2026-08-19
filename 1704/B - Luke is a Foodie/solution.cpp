#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, x;
    cin >> n >> x;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    vector<pair<int, int>> s(n);
    
    for(int i = 0; i < n; i++){
        s[i] = {v[i] - x, v[i] + x};
    }
    
    int l = s[0].first;
    int r = s[0].second;
    
    int c = 0;
    
    for(int i = 1; i < n; i++){
        l = max({s[i].first, l});
        r = min({s[i].second, r});
        
        if (l > r){
            c++;
            l = s[i].first;
            r = s[i].second;
        }
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