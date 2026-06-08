#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, a, io, ie, o = 0, e = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        if(a % 2 == 0){
            e++;
            ie = i+1;
        }
        else{
            o++;
            io = i+1;
        }
    }
    
    if(e == 1){
        cout << ie << endl;
    }
    else if(o == 1){
        cout << io << endl;;
    }
}