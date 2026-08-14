#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, b;
    
    cin >> n;
    
    a = 1;
    
    for(int i = 2; n >= i * i; i++){
        if(n % i == 0){
            a = n/i;
            break;
        }
    }
    
    b = n - a;
    
    cout << a << " " << b << endl;
    
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