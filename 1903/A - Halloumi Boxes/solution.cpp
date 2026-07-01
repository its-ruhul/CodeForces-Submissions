#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
  
    int t, x, y, a;
    
    
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        
        vector<int> va;
        vector<int> vb;
        
        bool b = 1;
        
        for(int j = 0; j < x; j++){
            cin >> a;
            va.push_back(a);
            vb.push_back(a);
        }
        
        sort(vb.begin(), vb.end());
        
        for(int j = 0; j < x; j++){
            
            // cout << va[j] << " " << vb[j] << endl;
            
            if (va[j] != vb[j]){
                b = 0;
                break;
            }
        }
        
        if(b == 1 || y > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
    return 0;
}