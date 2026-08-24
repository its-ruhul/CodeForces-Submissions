#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, m, a;
 
    cin >> n;
 
    for(int i = 0; i < n; i++){
        if (i > 0 && ((i & (i-1)) == 0)){
            a = i;
        }
    }
 
    for(int i = a-1; i >= 0; i--){
        cout << i << " ";
    }
 
    for(int i = a; i < n; i++){
        cout << i << " ";
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