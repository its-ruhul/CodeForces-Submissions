#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n;
    cin >> n;
    
    vector<int> min1(n, INT_MAX);
    vector<int> min2(n, INT_MAX);
    
    for(int i = 0; i < n; i++){
        int m, mi = INT_MAX, min_ind;
        cin >> m;
        
        vector<int> v(m);
        
        for(int j = 0; j < m; j++){
            cin >> v[j];
            
            if(v[j] < min1[i]) {
                min1[i] = v[j];
                min_ind = j;
            }
        }
        
        for(int j = 0; j < m; j++){
           
           if(j != min_ind){
               if(v[j] <= min2[i]) min2[i] = v[j];
           }
        }
    }
    
    // for(int i = 0; i < n; i++){
    //     cout << min1[i] << " ";
    // }
    // cout << endl;
    
    // for(int i = 0; i < n; i++){
    //     cout << min2[i] << " ";
    // }
    // cout << endl;
    
    auto min_it1 = min_element(min1.begin(), min1.end());
    int min_v1 = *min_it1;
    
    auto min_it2 = min_element(min2.begin(), min2.end());
    int min_v2 = *min_it2;
 
    // cout << min_v1 << " " << min_v2 << endl;
    
    long long c = 0;
    bool b = 0;
    for(int i = 0; i < n; i++){
        if(min2[i] != min_v2 || b) {
            c += min2[i];
        }
        else {
            b = 1;
        }
    }
    
    cout << c + min_v1 << endl;
    
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