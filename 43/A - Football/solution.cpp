#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, a = 0, b = 0;
    string sa, sb, s;
    
    cin >> n;
    
    cin >> s;
    sa = s;
    a++;
    
    for(int i = 1; i < n; i++){
        cin >> s;
        
        if(s == sa) a++;
        else {
            b++;
            sb = s;
        }
    }
    
    if(max({a, b}) == a) cout << sa << endl;
    else cout << sb << endl;
}