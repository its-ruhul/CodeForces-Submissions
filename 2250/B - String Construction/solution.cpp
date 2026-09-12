#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k;
    bool b = 1;
    cin >> n >> k;
    
    if(k == n-1){
        cout << -1 << endl;
        return 0;
    }
    
    if(k % 2 == 0){
        for(int i = 0; i < k/2+1; i++) cout << 1;
        for(int i = 0; i < k/2+1; i++) cout << 0;
    }
    else{
        for(int i = 0; i < k/2+1; i++) cout << 1;
        for(int i = 0; i < k/2+2; i++) cout << 0;
    }
    
    
    
    for(int i = k+2; i < n; i++){
        if(b){
            cout << 1;
            b = 0;
        }
        else{
            cout << 0;
            b = 1;
        }
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