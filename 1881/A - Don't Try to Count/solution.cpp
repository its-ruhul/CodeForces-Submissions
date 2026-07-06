#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, m, c = 0;
    string x, s;
    
    cin >> n >> m >> x >> s;
    
    while(x.size() <= 2 * s.size() || c <= 2){
        
        // cout << x << " " << s << " " << c << endl;
        
        if(x.find(s) != -1){
            
            // cout << "FOUND IT" << endl;
            
            cout << c << endl;
            return 0;
        }
        else{
            c++;
            x = x + x;
        }
    }
    
    cout << -1 << endl;
    
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