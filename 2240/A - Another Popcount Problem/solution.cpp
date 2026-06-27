#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
  
    int t, n, k;
 
    cin >> t;
 
    for(int i = 0; i < t; i++){
        cin >> n >> k;
 
        long long p = 0, y;
 
        if(n <= k){
            cout << n << endl;
        }
        else{
            while(1LL << p <= (n / k)+1){
                p++;
            }
            p--;
 
            long long r = n - k * ((1LL << p) - 1);
            long long y = r / (1LL << p);
 
            cout << y + p * k << endl;
 
            
        }
    }
    
    return 0;
}