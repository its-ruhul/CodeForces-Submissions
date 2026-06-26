#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int t, a, b;
    bool h = 0;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if (a != b) {
            h = 1;
            break;
        }
    }
    
    if(h) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;
    
    return 0;
}