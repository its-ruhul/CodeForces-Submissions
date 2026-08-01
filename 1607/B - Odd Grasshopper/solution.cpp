#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long x, n, a;
    
    cin >> x >> n;
    
    if(n % 4 == 0) a = 0;
    else if (n % 4 == 2) a = 1;
    else if (n % 4 == 1) a = -n;
    else a = n+1;
 
    if(x % 2 == 0) cout << x + a << endl;
    else cout << x - a << endl;
 
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