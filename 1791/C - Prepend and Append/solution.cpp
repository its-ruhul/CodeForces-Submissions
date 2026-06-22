#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int t, n;
    string s;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> s;
        
        int c = 0;
        
        for(int j = 0; j < ceil(n/2.0); j++){
            if(s[j] != s[n-1-j]){
                c += 2;
            }
            else break;
        }
        
        cout << n - c << endl;
    }
    
    return 0;
}