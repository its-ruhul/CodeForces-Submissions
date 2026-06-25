#include<bits/stdc++.h>
using namespace std;
 
void solve() {
}
 
int main() {
  
    char m;
    int a, b;
    string s, k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    cin >> m >> s;
    
    int l = s.size();
    
    if (m == 'R'){
        a = -1;
    }
    else{
        a = +1;
    }
    
    for(int i = 0; i < l; i++){
        b = k.find(s[i]);
        cout << k[b+a];
    }
    cout << endl;
    
    
    return 0;
}