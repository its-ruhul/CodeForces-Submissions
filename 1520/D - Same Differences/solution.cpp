#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, a;
    
    long long c = 0;
    
    map<int, int> m;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        a -= i;
        
        m[a]++;
    }
    
    for(const auto& p : m){
        long long j = p.second;
        c += j * (j-1) / 2;
    }
    
    cout << c << endl;
}
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}