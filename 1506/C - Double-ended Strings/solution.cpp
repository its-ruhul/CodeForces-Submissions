#include<bits/stdc++.h>
using namespace std;
 
int solve(){
 
    string a, b;
    cin >> a >> b;
 
    int na = a.size(), nb = b.size();
 
    int m = 0, m1 = 0;
 
    for(int i = 0; i < na; i++){
        
        int k = i;
 
        int j = 0;
        while(j < nb && k < na){
            if(a[k] == b[j]) {
                m1++;
                j++;
                k++;
            }
            else {
                m1 = 0;
                j++;
                k++;m1 = 0;
            } 
 
            m = max({m, m1});
 
            // cout << a[k-1] << " " << b[j-1] << " " << m1 << " " << m << endl;
        }
        m1 = 0;
    }
 
    // cout << "Second itertation" << endl;
 
    for(int i = 0; i < nb; i++){
        
        int k = i;
 
        int j = 0;
        while(j < na && k < nb){
            if(b[k] == a[j]) {
                m1++;
                j++;
                k++;
            }
            else {
                m1 = 0;
                j++;
                k++;
            } 
 
            m = max({m, m1});
 
            // cout << a[k-1] << " " << b[j-1] << " " << m1 << " " << m << endl;
        }
 
        m1 = 0;
    }
 
    m1 = 0;
 
    cout << na + nb - 2 * m << endl;
 
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