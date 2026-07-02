#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
  
    int t, n, x, a, m = 0;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> x;
        
        int a = 0, b, m = 0;
        
        for(int j = 0; j < n; j++){
            cin >> b;
            
            m = max({m, b-a});
            
            a = b;
        }
        
        m = max({m, 2 * (x-a)});
        
        cout << m << endl;
    }
    
    
    return 0;
}