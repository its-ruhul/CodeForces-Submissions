#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    long a, b, c;
    cin >> a;
    
    b = abs(a % 10);
    c = abs((a /10) % 10);
    
    // cout << c << " " << b << endl;
    
    // cout << (a / 100) * 10 << endl;
    
    if(a >= 0) cout << a << endl;
    else{
        if (b > c) cout << a / 10 << endl;
        else cout << (a / 100) * 10 - b << endl;
        
    }
}