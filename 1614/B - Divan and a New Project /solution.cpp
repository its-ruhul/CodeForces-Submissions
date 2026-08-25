#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, a;
    long long c = 0;
 
    cin >> n;
 
    vector<pair<long long, long long>> v;
 
    for(int i = 0; i < n; i++){
        cin >> a;
        v.emplace_back(a, i+1);
    }
 
    sort(v.begin(), v.end(), [](const auto& a, const auto& b){
        return a > b;
    });
    
    bool b = 0;
    int j = 1;
 
    for(const auto& i : v){
        
        c += 2 * j * i.first;
        
        if(b == 0){
            b = 1;
        }
        else {
            b = 0;
            j++;
        }
    }
    
    cout << c << endl << 0 << " ";
    
    b = 0;
    j = 1;
    
    vector<pair<long long, long long>> w;
    
    for(const auto& i : v){
        if(b == 0){
            w.emplace_back(i.second, j);
            b = 1;
        }
        else{
            w.emplace_back(i.second, -j);
            b = 0;
            j++;
        }
    }
    
    sort(w.begin(), w.end());
    
    for(const auto& i : w){
        cout << i.second << " ";
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