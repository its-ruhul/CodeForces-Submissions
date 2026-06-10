#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    const int N = 1000001;
    vector<bool> isPrime(N, 1);
 
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i < N; i++){
        if(isPrime[i] == true){
            for(int j = 2 * i; j < N; j+= i){
                isPrime[j] = 0;
            }
        }
    }
    
    long long n, b, r;
    cin >> n;
    
    for(long long i = 0; i < n; i++){
        cin >> b;
        
        long long r = round(sqrt(b));
        
        if(r * r == b && isPrime[r]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}