#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, p, a, b, l;
    long long c = 0;
    
    cin >> n >> p;
    l = n;
    
    vector<vector <int>> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v[i].push_back(a);
    }
    
    for(int i = 0; i < n; i++){
        cin >> b;
        v[i].push_back(b);
    }
    
    sort(v.begin(), v.end(), [] (const vector<int>& a , const vector<int>& b){
        return a[1] < b[1];
    });
    
    // cout << endl << p << endl;
    // for(int i = 0; i < n; i++){
    //     cout << v[i][0] << " " << v[i][1] << endl;
    // }
    // cout << endl;
    
    c += p;
    l--;
    for(int i = 0; i < n; i++){
        
        if(v[i][1] >= p || l == 0){
            // cout << "Greater than p, Mayor will handle" << endl;
            break;
        }
        else if (v[i][0] < l && v[i][1] < p){
            c += v[i][0] * v[i][1];
            l -= v[i][0];
 
            // cout << "c : " << c << " l : " << l << endl;  
        }
        else{
            c += v[i][1] * l;
            l = 0;
            // cout << "c : " << c << " l : " << l << endl; 
            break;
        }
    }
    
    // cout << endl;
    
    c += l * p;
    
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