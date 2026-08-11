#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long a, b, c;
 
    cin >> a >> b;
 
    c = abs(a - b);
 
    //if(a == 0 || b == 0){
    //    cout << 0 << " " << 0 << endl;
    //    return 0;
    //}
 
    cout << c << " ";
 
    if (a - b != 0){
        cout << min(a % c, c - a % c) << endl;
    }
    else {
        cout << 0 << endl;
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