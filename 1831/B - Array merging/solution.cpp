#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n;
    cin >> n;
    
    vector<int> v1(n);
    vector<int> v2(n);
    
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> v2[i];
    }
    
    vector<int> va(2 * n + 1, 0);
    vector<int> vb(2 * n + 1, 0);
    
    va[v1[0]] = 1;
    vb[v2[0]] = 1;
    
    int c1 = 1, c2 = 1;
    for(int i = 1; i < n; i++){
        
        if(v1[i] == v1[i-1]){
            c1++;
        }
        else {
            c1 = 1;
        }
        
        if(v2[i] == v2[i-1]){
            c2++;
        }
        else {
            c2 = 1;
        }
        
        va[v1[i]] = max({va[v1[i]], c1});
        vb[v2[i]] = max({vb[v2[i]], c2});
    }
    
    /*
    for(int i = 0; i < 2 * n + 1; i++){
        cout << va[i] << " ";
    }
    cout << endl;
    
    for(int i = 0; i < 2 * n + 1; i++){
        cout << vb[i] << " ";
    }
    cout << endl << endl;
    */
    
    int m = 0;
    for(int i = 0; i < 2 * n + 1; i++){
        m = max({m, va[i] + vb[i]});
    }
    
    cout << m << endl;
    
    
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