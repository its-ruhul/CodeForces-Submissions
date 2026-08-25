#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int w, h, k, mi, ma;
    long long ans = 0, t;
    
    cin >> w >> h;
    
    vector<int> v(4);
    
    for(int i = 0; i < 4; i++){
        cin >> k >> mi;
        
        for(int j = 1; j < k; j++){
            cin >> ma;
        }
        
        if(i < 2) t = h;
        else t = w;
        
        ans = max({ans, (ma - mi) * t});
        
        //cout << ma - mi << " " << t << " " << ans << endl;
    }
    
    cout << ans << endl;
    
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