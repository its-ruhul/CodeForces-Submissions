#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, d, m = 0;
    
    cin >> n;
    
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    
    for(int i = 0; i < n; i++){
        cin >> d;
        a[i] = d;
        
        m = max({m, d});
    }
    
    for(int i = 0; i < n; i++){
        if(a[i] == m) c.push_back(a[i]);
        else b.push_back(a[i]);
    }
    
    int lb = b.size();
    int lc = c.size();
    
    if(n == lb || n == lc) {
        cout << -1 << endl;
        return 0;
    }
    
    
    cout << lb << " " << lc << endl;
    
    for(int i = 0; i < lb; i++) cout << b[i] << " ";
    cout << endl;
    
    for(int i = 0; i < lc; i++) cout << c[i] << " ";
    cout << endl;
    
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