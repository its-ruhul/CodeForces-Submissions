#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long a, b, c = 0, d;
    cin >> a >> b;
    
    if (a < b){
        while( a < b){
            c++;
            a *= 2;
        }
    }
    else {
        while( a > b){
            c++;
            
            if(a % 2 != 0){
                break;
            }
            a /= 2;
        }
    }
    
    d = c / 3;
    if (c % 3 == 1 || c % 3 == 2){
        d++;
    }
    
    if(a == b){
        cout << d << endl;
    }
    else {
        cout << -1 << endl;
    }
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