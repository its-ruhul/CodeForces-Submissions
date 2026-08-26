#include<bits/stdc++.h>
using namespace std;
 
int solve(){
 
    long long a, b, x;
 
    cin >> a >> b;
 
    if((a-1) % 4 == 0) x = a-1;
    else if((a-1) % 4 == 1) x = 1;
    else if((a-1) % 4 == 2) x = a;
    else x = 0;
 
    if(x == b) cout << a << endl;
    else if ((x ^ b) != a) cout << a+1 << endl;
    else cout << a+2 << endl;
 
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