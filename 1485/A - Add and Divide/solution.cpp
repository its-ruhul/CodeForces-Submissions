#include<bits/stdc++.h>
using namespace std;
 
int solve(){
 
    int a, b, c, m = 0, ans = INT_MAX;
 
    cin >> a >> b;
 
    for(int i = 0; i < 30; i++){
 
        int m;
        c = b + i;
 
        if(c == 1){
            continue;
        }
 
        int ta = a;
        m = i;
 
        while(ta > 0){
            ta /= c;
            m++;
        }
        
        ans = min({ans, m});
    }
 
    cout << ans << endl; 
 
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