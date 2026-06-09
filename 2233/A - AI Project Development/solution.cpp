#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int t, n, x, y, z, a, b;
    cin >> t;
    
    for(int i = 0; i < t;i++){
        cin >> n >> x >> y >> z;
        
        if(n % (x + y) == 0){
            a = n / (x + y);
            //cout << "CASE1a ";
        }
        else{
            a = (n / (x + y)) + 1;
            //cout << "CASE2a ";
        }
 
        if ((n + 10 * y * z) % (x + 10 * y) == 0){
          b = (n + 10 * y * z) / (x + 10 * y);
            //cout << "CASE1b ";
        }
        else{
          b = ((n + 10 * y * z) / (x + 10 * y)) + 1;
            //cout << "CASE2b ";
        }
 
        //cout << a << " " << b << endl;
        
        if(a < b) cout << a << endl;
        else cout << b << endl;
 
        //cout << endl;
    }
}