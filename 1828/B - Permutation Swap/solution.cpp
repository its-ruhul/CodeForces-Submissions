#include<bits/stdc++.h>
#include<numeric>
using namespace std;
 
int solve(){
    
    int n, a, g = 0;
    cin >> n;
 
    for(int i = 1; i <= n; i++){
        cin >> a;
 
        g = gcd(g, abs(a-i));
    }
    cout << g << endl;
 
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