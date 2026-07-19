#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long a, maxn, minn;
    cin >> a;
    
    if(a % 4 == 0) maxn = a / 4;
    else if ((a-6) % 4 == 0 && (a-6) >= 0) maxn = (a - 6) / 4 + 1;
    else maxn = -1;
    
    if(a % 6 == 0) minn = a / 6;
    else if ((a-4) % 6 == 0 && (a-4) >= 0) minn = (a - 4) / 6 + 1;
    else if ((a-2) % 6 == 0 && (a-2) > 0) minn = (a - 2) / 6 + 1;
    else minn = -1;
    
    if(minn == -1 && maxn == -1) cout << -1 << endl;
    else cout << minn << " " << maxn << endl;
 
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