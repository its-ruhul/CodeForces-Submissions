#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n;
    bool b = 0;
    
    cin >> n;
    
    vector<int> v(n);
    vector<int> a(3);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(int i = 1; i < n-1; i++){
        if(v[i-1] < v[i] && v[i+1] < v[i]){
            b = 1;
            a[0] = i;
            a[1] = i+1;
            a[2] = i+2;
            break;
        }
    }
    
    if(b == 0) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        
        for(int i = 0; i < 3; i++){
            cout << a[i] << " ";
        }
        cout << endl;
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