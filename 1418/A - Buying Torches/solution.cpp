#include<bits/stdc++.h>
using namespace std;
 
int solve(){
 
    long long x, y, k, op1;
 
    cin >> x >> y >> k;
 
    op1 = ceil((long double)(k + k * y - 1) / (x-1));
 
    cout << op1 + k << endl;
 
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