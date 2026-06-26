#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, v, m, t, l, r;
    long long c = 0;
    vector<long long> va;
    vector<long long> vb;
    vector<long long> vc;
    
    cin >> n;
    
    va.push_back(c);
    
    for(int i = 0; i < n; i++){
        cin >> v;
        c += v;
        va.push_back(c);
        vb.push_back(v);
    }
    
    sort(vb.begin(), vb.end());
    
    c = 0;
    vc.push_back(c);
    
    for(int i = 0; i < n; i++){
        c += vb[i];
        vc.push_back(c);
    }
    
    cin >> m;
    
    // for(int i = 0; i <= n; i++){
    //     cout << va[i] << " ";
    // }
    // cout << endl;
    
    // for(int i = 0; i <= n; i++){
    //     cout << vc[i] << " ";
    // }
    // cout << endl;
    
    for(int i = 0; i < m; i++){
        cin >> t >> l >> r;
        
        if(t == 1){
            cout << va[r] - va[l-1] << endl;
        }
        else{
            cout << vc[r] - vc[l-1] << endl;
        }
    }
    
    return 0;
}