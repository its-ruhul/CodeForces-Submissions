#include<bits/stdc++.h>
using namespace std;
 
int Solve() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    //b is not in AP.
    if(((a+c)/2) % b == 0 && (a+c) % 2 == 0){
        cout << "YES" << endl;
        return 0;
    }
    
    //c is not in AP.
    if((2*b-a) % c == 0 && (2*b-a) > 0){
        cout << "YES" << endl;
        return 0;
    }
    
    //a is not in AP.
    if((2*b-c) % a == 0 && (2*b-c) > 0){
        cout << "YES" << endl;
        return 0;
    }
    
    cout << "NO" << endl;
    return 0;
}
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        Solve();
    }
    
    return 0;
}