#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k, a;
    cin >> n >> k;
    
    vector<pair<int, int> > v;
    
    for(int i = 1; i <= n; i++){
        cin >> a;
 
        if(a % k != 0) v.push_back({a % k, i});
        else v.push_back({k, i});
    }
    
    sort(v.begin(), v.end(), [](const auto& a, const auto& b){
        if(a.first != b.first){
            return a.first > b.first;
        }
        else{
            return a.second < b.second;
        }
    });
 
    // for(const auto& i : v){
    //     cout << i.first << " " << i.second << "; ";
    // }
    // cout << endl;
    
    for(const auto& i : v){
        cout << i.second << " ";
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