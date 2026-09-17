#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, c = 0;
 
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        c += (n/i) * (n/i);
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