#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int a, b, c;
 
    cin >> a >> b >> c;
 
    if(a == b || b == c || c == a){
        cout << 0 << endl;
        return 0;
    }
 
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
 
    int mid;
 
    if ( a != maxi && a != mini) mid = a;
    else if ( b != maxi && b != mini) mid = b;
    else if ( c != maxi && c != mini) mid = c;
 
    cout << min({maxi - mid, mid - mini}) << endl;
 
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