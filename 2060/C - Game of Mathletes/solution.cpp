#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, k, c = 0;
    cin >> n >> k;
 
    vector<int> v(n);
 
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    int i = 0, j = n-1;
 
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
 
    while(i < j){
        if(v[i] + v[j] == k){
            c++;
            i++;
            j--;
        }
        else {
            if(v[j] + v[i] > k) j--;
            else if(v[i] + v[j] < k) i++;
        }
    }
 
    cout << c << endl;
 
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