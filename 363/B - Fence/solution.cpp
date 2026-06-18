#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, k, a = 0, m = INT_MAX,  c = 0, s = 1;
    vector<int> v;
    
    cin >> n >> k;
    
    for(int i = 0; i <= n; i++){
        c += a;
        v.push_back(c);
        cin >> a;
    }
    
    // for(int i = 0; i <= n; i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    
    for(int i = 0; i <= n-k; i++){
        if(v[i+k] - v[i] < m){
            s = i+1;
        }
        m = min({m, v[i+k] - v[i]});
        
        //cout << m << " " << s << " " << v[i+k] << " " << v[i] << endl;
        
    } 
    
    cout << s << endl;
    
    return 0;
}