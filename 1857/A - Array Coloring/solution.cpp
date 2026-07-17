#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, ne = 0, no = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        if(a % 2 == 0) ne++;
        else no++;
        
    }
    
    if(no % 2 == 0) cout << "YES" << endl;
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