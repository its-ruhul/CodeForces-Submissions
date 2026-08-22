#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, l2 = 0, i = 0;
    
    cin >> n;
 
    while(l2 <= n){
        l2 = 1 << i;
        i++;
    }
 
    cout << n * (n+1) / 2 - 2 * (l2 - 1) << endl;
    
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