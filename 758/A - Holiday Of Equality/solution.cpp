#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
  
    int n, a, b = 0;
    long long c = 0;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
        
        b = max({b, a});
    }
    
    for(int i = 0; i < n; i++){
        c+= b - v[i];
    }
    
    cout << c << endl;
    
    
    return 0;
}