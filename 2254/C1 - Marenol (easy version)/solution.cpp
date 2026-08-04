#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, co1 = 0, ce1 = 0, co2 = 0, ce2 = 0;
    string s1, s2;
 
    cin >> n >> s1 >> s2;
 
    for(int i = 0; i < n; i++){
        if(s1[i] == '1'){
            if ( i % 2 == 0) ce1++;
            else co1++;
        }
        
        if(s2[i] == '1'){
            if (i % 2 == 0) ce2++;
            else co2++;
        }
    }
 
    if(co1 == co2 && ce1 == ce2) cout << "YES" << endl;
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