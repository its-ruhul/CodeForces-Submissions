#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k, a, m = INT_MAX, n4 = 0, n2 = 0;
    cin >> n >> k;
    
    if (k != 4){
        for(int i = 0; i < n; i++){
            cin >> a;
 
            if( a % k == 0) m = 0;
            else m = min({m, k - (a % k)});
        }
    }
    else{
        for(int i = 0; i < n; i++){
            cin >> a;
 
            if( a % k == 0) m = 0;
            else m = min({m, k - (a % k)});
            
            if(a % 4 == 2) n2++;
        }
        
        if(n2 > 1) m = 0;
        else if(n2 == 1 && n > 1) m = min({m, 1});
        else if( n > 1) m = min({m, 2});
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