#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, a = 3;
    cin >> n;
    
    if(n == 1){
        cout << 1 << endl;
    }
    else if (n == 2){
        cout << -1 << endl;
    }
    else{
        
        cout << 1 << " " << 2 << " " << 3;
        
        for(int i = 3; i < n; i++){
            a = a * 2;
            cout << " " << a;
        }
        cout << endl;
        
    }
    
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