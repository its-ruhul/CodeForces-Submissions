#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, k, m, a, b;
    
    cin >> n >> k >> m;
    
    if(k > m){
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    
    a = m / k;
    b = m % k;
    
    // cout << a << " " << b << endl;
    
    for(int i = 0; i < k; i++){
        
        if(b > 0){
            cout << a + 1 << " ";
            b--;
        }
        else{
            cout << a << " ";
        }
    }
    
    for(int i = k; i < n; i++){
        cout << 1 << " ";
    }
    cout << endl;
    
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