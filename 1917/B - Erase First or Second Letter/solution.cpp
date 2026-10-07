#include<bits/stdc++.h>
using namespace std;
 
 
int solve(){
    
    long long n, a = 0;
    cin >> n;
    
    set<char> v;
    
    string s;
    cin >> s;
    
    for(int i = 0; i < n; i++){
        v.insert(s[i]);
        a += v.size();
    }
    
    cout << a << endl;
    
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