#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, c = 0;
 
    cin >> n;
 
    unordered_map<int, int> m;
 
    for(int i = 0; i < n; i++){
        cin >> a;
 
        m[a]++;
 
        // cout << m[a] << " ";
    }
    // cout << endl;
 
    if(m.size() > 2) cout << "No" << endl;
    else if(m.size() == 1) cout << "Yes" << endl;
    else {
        int i = 0;
        for(const auto& kv : m){
            int s = kv.second;
            if (i == 0) c += s;
            else c -= s;
 
            // cout << c << " ";
            i++;
        }
        // cout << endl;
 
        if(c == 0 || abs(c) == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
 
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