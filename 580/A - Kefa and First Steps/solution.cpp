#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    long long n, a, b, c = 1, d = 1;
    
    cin >> n >> a;
    
    for(int i = 1; i < n; i++){
        cin >> b;
        
        if (b >= a){
            c++;
            if (c > d) d = c;
        }
        else{
            c = 1;
        }
        
        //cout << a << " " << b << " " << c << " " << d << endl;
        
        a = b;
    }
    
    cout << d << endl;
}