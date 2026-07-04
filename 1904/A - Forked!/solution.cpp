#include<bits/stdc++.h>
using namespace std;
 
int solve() {
    
    int a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    
    set<pair<int, int>> kh, qh;
    
    vector<int> x = {1, -1, -1, 1}, y = {1, 1, -1, -1};
    
    for(int i = 0; i < 4; i++){
        kh.insert({kx + x[i] * a, ky + y[i] * b});
        kh.insert({kx + x[i] * b, ky + y[i] * a});
        
        qh.insert({qx + x[i] * a, qy + y[i] * b});
        qh.insert({qx + x[i] * b, qy + y[i] * a});
    }
    
    // for(auto const& [xs, ys] : kh){
    //     cout << xs << " " << ys << endl;
    // }
    // cout << endl;
    
    // for(auto const& [xs, ys] : qh){
    //     cout << xs << " " << ys << endl;
    // }
    // cout << endl;
    
    int c = 0;
    for(auto p : kh){
        if (qh.find(p) != qh.end()) c++;
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