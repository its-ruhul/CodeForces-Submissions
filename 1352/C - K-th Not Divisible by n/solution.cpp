#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int t, n, k;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        
        cout << k + (k - 1) / (n - 1) << endl;
    }
    
    return 0;
}