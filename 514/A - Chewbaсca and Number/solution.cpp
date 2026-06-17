#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    long long n, a = 0;
    int r;
    cin >> n;
    
    long long i = 1;
    while(n != 0){
        r = n % 10;
        n = n / 10;
        
        if (r > 4) r = 9 - r;
        a += r * i;
        i = i * 10;
    }
    
    if (r == 0){
        a += 9 * (i / 10);
    }
    
    cout << a << endl;
    return 0;
}