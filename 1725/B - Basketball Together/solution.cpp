#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, d, p, a, m = 0;
    
    long long c = 0;
    
    cin >> n >> d;
    
    deque<int> l;
    
    for(int i = 0; i < n; i++){
        cin >> p;
        l.push_back(p);
    }
    
    sort(l.begin(), l.end());
    
    // for(int i = 0; i < n; i++){
    //     cout << l[i] << " ";
    // }
    // cout << endl;
    
    while(!l.empty()){
        
        a = l.back();
        l.pop_back();
        
        c += a;
        
        // cout << a << " " << c << " " << m << endl;
        
        while(c <= d && !l.empty()) {
            
            l.pop_front();
            c += a;
            // cout << a << " " << c << " " << m << endl;
        }
        
        if(c > d){
            m++;
            c = 0;
        }
        
        // cout << a << " " << c << " " << m << endl;
        // cout << endl;
    }
    
    cout << m << endl;
    
    return 0;
}
 
 
int main() {
  
    // int t;
    // cin >> t;
    
    // for(int i = 0; i < t; i++){
    //     solve();
    // }
    
    solve();
    
    return 0;
}