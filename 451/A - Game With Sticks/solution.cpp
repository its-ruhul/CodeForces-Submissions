#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, m, d;
    
    cin >> n >> m;
    
    d = min({n, m});
    
    if(d % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
    
    return 0;
}