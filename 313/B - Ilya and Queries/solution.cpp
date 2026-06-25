#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, m, l, r, c = 0;
    string s;
    vector<int> v;
    
    cin >> s;
    n = s.size();
 
    v.push_back(0);
    for(int i = 1; i < n; i++){
        
        if(s[i] == s[i-1]) v.push_back(++c);
        else v.push_back(c);
 
        // cout << s[i] << " " << s[i-1] << " " << c << endl;
    }
 
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
 
    cin >> m;
 
    for(int i = 0; i < m; i++){
        cin >> l >> r;
        cout << v[r-1] - v[l-1] << endl;
    }
    
    return 0;
}