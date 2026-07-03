#include<bits/stdc++.h>
using namespace std;
 
int solve() {
    int n, c = 0, m = 0;
    string s;
    
    cin >> n >> s;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            c++;
            m++;
        }
        else m = 0;
        
        if(m >= 3){
            cout << 2 << endl;
            return 0;
        }
    }
    
    cout << c << endl;
    
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