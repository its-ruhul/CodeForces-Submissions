#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, a, b;
    
    map<int, deque<int>> m;
    
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        v[i-1] = a;
        
        m[a].push_back(i);
    }
    
    for(auto& [i,j] : m){
        
        if (j.size() == 1){
            cout << -1 << endl;
            return 0;
        }
        
        b = j.back();
        //cout << b << " " ;
        j.push_front(b);
        j.pop_back();
    }
    // cout << endl;
    
    for(int i = 0; i < n; i++){
        cout << m[v[i]].front() << " ";
        m[v[i]].pop_front();
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