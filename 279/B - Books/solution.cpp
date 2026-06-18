#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, t, a = 0, c=0;
    vector<int> v;
    
    cin >> n >> t;
    
    for(int i = 0; i <= n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    // for(int i = 0; i < n; i++){
    //     cout << v.at(i) << " ";
    // }
    // cout << endl;
    
    int l = 0, r = 0, m = 0, s = 0;
    
    while(r < n){
        s += v[r];
        
        while(s > t){
            s -= v[l];
            l++;
        }
        
        if(s <= t){
            m = max({m, r-l+1});
        }
        
        // cout << l << " " << r << " " << s << " " << m << " " << t << endl;
        
        r++;
    }
    
    cout << m << endl;
    
    
    return 0;
}