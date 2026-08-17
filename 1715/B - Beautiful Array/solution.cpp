#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, k, b;
    long long s, r;
    
    cin >> n >> k >> b >> s;
    
    vector<long long> v(n, 0);
    
    v[0] = k * b;
    r = s - k * b;
    
    if (v[0] > s){
        cout << -1 << endl;
        return 0;
    }
    
    //cout << r << " " << s << " " << v[0] << " first" << endl;
    
    int i = 0;
    while(r > k-1 && i < n){
        
        //cout << v[i] << " " << r << " " << i << " before" << endl;
        
        v[i] += k-1;
        r -= k-1;
        i++;
        
        //cout << v[i-1] << " " << r << " " << i << " after" << endl;
    }
    
    //cout << i << " " << r << " " << b << endl;
    
    if(i < n && r / k == 0){
        v[n-1] += r;
        r = 0;
    }
    
    if (r != 0){
        cout << -1 << endl;
        return 0;
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