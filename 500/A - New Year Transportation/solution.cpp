#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, t, a;
    vector<int> v;
    
    cin >> n >> t;
    
    for(int i = 1; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    v.push_back(0);
    
    int i = 0;
    while(i < n-1){
        
        // cout << i << " " << t-1 << endl;
        
        if(i == t-1){
            break;
        }
        
        i += v[i];
    }
    
    if(i == t-1){
        cout << "YES" << endl;
        return 0;
    }
    
    cout << "NO" << endl; 
    
    
    return 0;
}