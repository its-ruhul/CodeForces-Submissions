#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, m, a, m1 = INT_MAX, c1 = 0, a1 = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            cin >> a;
            
            a1 += abs(a);
            m1 = min({m1, abs(a)});
            
            if(a <= 0){
                c1++;
            }
            
            // cout << c1 << " " << a1 << endl;
        }
    }
    
    if(c1 % 2 != 0){
        a1 -= 2 * m1;
    }
    
    cout << a1<< endl;
    
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