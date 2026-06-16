#include<bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t, n, a;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        int c = 0, d = 0;
        
        for(int j = 0; j < n; j++){
            cin >> a;
            if(a == 0) c++;
            else c = 0;
            
            if(c > d) d = c;
        }
        
        cout << d << endl;
    }
  
    return 0;
}