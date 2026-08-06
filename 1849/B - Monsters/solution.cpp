#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k, a;
    cin >> n >> k;
    
    vector<pair<int, int>> v;
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        
        if(a % k == 0) {
            cout << i << " ";
        }
        else{
            v.emplace_back(a % k, i);
        }
    }
    
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        if(a.first != b.first){
            return a.first > b.first;
        }
        return a.second < b.second;
    });
    
 
    for(const auto& [j, i] : v){
        cout << i << " ";
    }
    
    cout << endl;
 
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