#include<bits/stdc++.h>
using namespace std;
 
int solve() {
    
    int a, b, n, x;
    
    cin >> a >> b >> n;
    
    long long c = b;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        
        if(x < a) c += x;
        else c += a - 1;
        
    }
    
    cout << c << endl;
    
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