#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, a, c1 = 0, c0 = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 1) c1++;
        else if (a == 0) c0++;
    }
    
    cout << c1 * (1LL << c0) << endl;
 
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