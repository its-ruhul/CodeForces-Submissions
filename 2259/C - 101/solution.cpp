#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int f1 = 0, l1 = 0;
    
    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            f1 = i;
            break;
        }
        else if (v[i] == -1){
            v[i] = 1;
            f1 = i;
            break;
        }
    }
    
    for(int i = n-1; i >= 0; i--){
        if(v[i] == 1){
            l1 = i;
            break;
        }
        else if (v[i] == -1){
            v[i] = 1;
            l1 = i;
            break;
        }
    }
    
    while(f1 < l1){
        if (v[f1] == -1) v[f1] = 0;
        f1++;
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