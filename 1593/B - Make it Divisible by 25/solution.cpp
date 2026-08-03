#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    long long n, c5 = 0, c0 = 0;
    bool has5 = 0, has0 = 0;
    cin >> n;
    
    while(n > 0){
        
        if(has5 && (n % 10 == 2 || n % 10 == 7)){
            cout << c5 << endl;
            break;
        }
        else if(has0 && (n % 10 == 0 || n % 10 == 5)){
            cout << c0 << endl;
            break;
        }
        
        if(n % 10 == 5 && !has5){
            has5 = 1;
            c0++;
        }
        else if(n % 10 == 0 && !has0){
            has0 = 1;
            c5++;
        }
        else{
            c5++;
            c0++;
        }
        
        n /= 10;
    }
 
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