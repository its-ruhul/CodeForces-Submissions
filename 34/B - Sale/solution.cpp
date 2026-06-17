#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, m, a, c;
    vector<int> v;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < m; i++){
        if(v[i] < 0) c -= v[i];
    }
    
    cout << c << endl;
}