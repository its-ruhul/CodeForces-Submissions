#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, a, m;
    vector<int> v;
    
    v.push_back(0);
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        
        for(int j = 0; j < a; j++){
            v.push_back(i);
        }
        
    }
    
    // for(const auto& i : v){
    //     cout << i << " ";
    // }
    // cout << endl;
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        cin >> a;
        cout << v[a] << endl;
    }
}