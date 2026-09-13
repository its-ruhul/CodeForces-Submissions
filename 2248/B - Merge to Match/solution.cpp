#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, m;
    cin >> n >> m;
    
    vector<int> vn(n);
    vector<int> vm(m);
    
    for(int i = 0; i < n; i++){
        cin >> vn[i];
    }
    
    for(int i = 0; i < m; i++){
        cin >> vm[i];
    }
    
    if(n < m * 2){
        cout << "NO" << endl;
        return 0;
    }
    
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());
 
    for(int i = 0; i < m; i++){
        if(vm[i] < vn[i] || vn[n-m+i] < vm[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    
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