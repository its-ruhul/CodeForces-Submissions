#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, c = 0;
    cin >> n;
 
    vector<int> v;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
 
    int i = 0;
    while(i < n){
        if(v[i] != 0){
            c++;
            while(v[i] != 0 && i < n) i++;
        }
        else i++;
    }
    
    if(c > 2) cout << 2 << endl;
    else cout << c << endl;
 
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