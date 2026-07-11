#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, b;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 1) a++;
        
        v.push_back(a);
    }
    
    for(int i = 1; i < n; i++){
        if(v[i] % v[i-1] == 0) v[i]++;
    }
    
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
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