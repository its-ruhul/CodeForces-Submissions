#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if(a > b) cout << "First" << endl;
    else if ( a == b && c % 2 == 0) cout << "Second" << endl;
    else if ( a == b && c % 2 != 0) cout << "First" << endl;
    else cout << "Second" << endl;
 
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