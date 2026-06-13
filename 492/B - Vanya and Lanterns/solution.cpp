#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, l, a;
    cin >> n >> l;
    
    vector<int> v;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << " ";
    // }
    
    a = 0;
    
    for(int i = 0; i < n-1; i++){
        if(v[i+1] - v[i] > a) a = v[i+1] - v[i];
    }
    
    // if(v[0] > a / 2.0 ){
    //     cout << setprecision(10) << (double)v[0] << endl;  
    // }
    // else if(l - v[n-1] > a / 2.0){
    //     cout << setprecision(10) << (double)l - v[n-1] << endl;
    // }
    // else cout << setprecision(10) << (double)a / 2.0 << endl;
    
    double m = max({(double)v[0], (double)a/2.0, (double)l - v[n-1]});
    
    //cout << v[0] << " " << a/2.0 << " " << v[n-1] - l << endl;
    
    cout << fixed << setprecision(10) << m << endl;
    return 0;
}