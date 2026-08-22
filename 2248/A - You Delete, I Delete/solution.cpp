#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    string s;
    bool b1 = 1, b0 = 1;
    cin >> s;
 
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '0' && b0 == 1){
            b0 = 0;
            continue;
        }
        else if (s[i] == '1' && b1 == 1){
            b1 = 0;
        }
        else {
            cout << s[i];
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