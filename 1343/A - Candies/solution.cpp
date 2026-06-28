#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
  
    long long t, n, k;
 
    cin >> t;
 
    for(int i = 0; i < t; i++){
        cin >> n;
        
        k = 2;
        while((1 << k) - 1 <= n){
            
            // cout << n << " " << (1 << k) - 1 << " " << k << endl;
            
            if (n % ((1 << k) - 1) == 0){
                cout << n / ((1 << k) - 1) << endl;
                break;
            }
            k++;
        }
        
        //cout << 1 << endl;
    }
    
    return 0;
}