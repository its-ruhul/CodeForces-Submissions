#include<bits/stdc++.h>
using namespace std;
 
int solve() {
    
    int n;
    
    cin >> n;
    
    if(n % 3 == 0) cout << "Second" << endl;
    else cout << "First" << endl;
    
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