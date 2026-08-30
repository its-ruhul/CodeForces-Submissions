#include<bits/stdc++.h>
using namespace std;
 
long long nextPrime(long long n){
 
    for(long long i = n;; i++){
 
        bool isPrime = 1;
        for(long long j = 2; j * j <= i; j++){
            
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
 
        if(isPrime == 1){
            return i;
        }
    }
}
 
int solve(){
 
    long long d;
 
    cin >> d;
 
    long long p = nextPrime(d+1);
    long long q = nextPrime(d+p);
 
    cout << min({1LL * p * p * p, 1LL * p * q}) << endl;
 
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