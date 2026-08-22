#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    vector<int> v(3);
 
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    // for(int i = 0;i < 3; i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
 
    if(v[0] + v[1] == v[2]) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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