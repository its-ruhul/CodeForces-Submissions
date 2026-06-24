#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k, on = 0;
    
    cin >> n >> k;
    
    string s;
    unordered_map<char, int> m;
    
    cin >> s;
    
    for(int i = 0; i < n; i++){
        m[s[i]]++;
    }
    
    for(const auto& [i,j] : m){
        if (j % 2 != 0) on++;
        
        // cout << i << " " << j << " " << on << endl;
    }
    
    if(on > k + 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}