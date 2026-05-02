#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int t, n, q, l, r, a;
    
    long long k;
    
    cin >> t;
    
    for(int j = 0; j < t; j++){
        
        cin >> n >> q;
        
        int ar[n+1];
        ar[0] = 0;
        
        for(int i = 1; i < n+1; i++){
            cin >> a;
            ar[i] = a + ar[i-1];
            //cout << ar[i] << " ";
        }
        //cout << endl;
        
        for(int i = 0; i < q; i++){
            cin >> l >> r >> k;
            
            long long ans = ar[l-1] + ar[n] - ar[r] + (r - l + 1) * k;
            
            //cout << ar[n] << " " << ar[r] << " ";
            
            if(ans % 2 == 0){
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}