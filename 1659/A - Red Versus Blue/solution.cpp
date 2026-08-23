#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int n, r, b;
    string s = "";
 
    cin >> n >> r >> b;
 
    int a = r / (b+1);
    int c = r % (b+1);
    // cout << a << endl;
    
    for(int j = 0; j < a; j++){
        s += "R";
    }
 
    // cout << b+1 << " " << a << " " << c << endl;
 
    int i = b+1;
    while(i--){
        
        cout << s;
 
        if(c > 0){
            cout << "R";
            c--;
        }
        
        if(b > 0){
            cout << "B";
            b--;
        }
    }
 
    // while(r > 0){
    //     cout << "R";
    //     r--;
    // }
 
    cout << endl;
 
    return 0;
}
 
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    return 0;
}