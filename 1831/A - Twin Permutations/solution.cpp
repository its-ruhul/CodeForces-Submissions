#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << n+1-a << " ";
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