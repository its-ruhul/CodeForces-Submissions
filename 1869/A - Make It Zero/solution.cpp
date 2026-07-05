#include<bits/stdc++.h>
using namespace std;
 
int solve() {
    
    int n, a;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a;
    
    if(n % 2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    else{
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
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