#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    string s, t, a = "";
    int c = 0;
    
    cin >> s >> t;
    
    unordered_map<char, int> m;
    
    for(int i = 0; i < t.size(); i++){
        m[t[i]]++;
    }
    
    for(int i = s.size()-1; i >= 0; i--){
        if(m.find(s[i]) != m.end()){
            
            if(m[s[i]] > 0){
                m[s[i]]--;
                a = s[i] + a;   
            }
        }
    }
 
    for(const auto& i : m){
        c += i.second;
    }
    
    // cout << a << " " << c << " ";
    
    if(a == t && c == 0) cout << "YES" << endl;
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