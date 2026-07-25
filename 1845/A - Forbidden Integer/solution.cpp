#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k, x;
    
    cin >> n >> k >> x;
    
    if(x != 1){
        cout << "YES " << endl << n << endl;
        
        for(int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
    }
    else if(x == 1 && n % 2 == 0 && k > 1){
        cout << "YES " << endl << n / 2 << endl;
        
        for(int i = 0; i < n/2; i++) cout << 2 << " ";
        cout << endl;
    }
    else if(x == 1 && n % 2 != 0 && k > 2){
        cout << "YES " << endl << 1 + (n-3) / 2 << endl;
        
        cout << 3 << " ";
        for(int i = 0; i < (n-3) / 2; i++) cout << 2 << " ";
        cout << endl;
    }
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