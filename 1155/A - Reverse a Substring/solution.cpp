#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, b;
    string s;
    cin >> n >> s;
    
    for(int i = 1; i < n; i++){
        if (s[i] < s[i-1]){
            
            cout << "YES" << endl << i << " " << i+1 << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}
 
 
int main() {
  
    int t = 1;
    // cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}