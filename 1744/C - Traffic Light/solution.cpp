#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a;
    char c;
    string s, t;
    
    cin >> n >> c >> s;
    
    if(c == 'g'){
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'g') a = i;
    }
    
    for(int i = a + 1; i < n; i++){
        t += s[i];
    }
    
    for(int i = 0; i <= a; i++){
        t += s[i];
    }
    
    // cout << t << " ";
    
    int c1 = 0, m = 0;
    bool b = 0;
    
    for(int i = 0; i < n; i++){
        
        if(b == 1){
            c1++;
            
            if(t[i] == 'g'){
                b = 0;
                m = max({m, c1});
                c1 = 0;
            }
        }
        
        if(t[i] == c) b = 1;
    }
    
    cout << m << endl;
    
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