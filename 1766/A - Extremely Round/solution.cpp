#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, c = 0;
    
    cin >> n;
    
    while(n > 10){
        n = n / 10;
        c += 9;
    }
    
    c += n;
    
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