#include<bits/stdc++.h>
using namespace std;
 
int solve(){
 
    int n, c2 = 0, c3 = 0;
    cin >> n;
 
    while(n % 2 == 0){
        n = n / 2;
        c2++;
    }
 
    while(n % 3 == 0){
        n = n / 3;
        c3++;
    }
 
    if(c2 > c3 || n != 1){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << 2 * c3 - c2 << endl;
    }
 
    // cout << c2 << " " << c3 << " " << n << endl;
 
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