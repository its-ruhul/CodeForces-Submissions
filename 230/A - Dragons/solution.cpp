#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int s, n, x, y, t;
    cin >> s >> n;
    
    int arx[n], ary[n];
    
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        arx[i] = x;
        ary[i] = y;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if (arx[j] < arx[i]){
                t = arx[j];
                arx[j] = arx[i];
                arx[i] = t;
                
                t = ary[j];
                ary[j] = ary[i];
                ary[i] = t;
            }
        }
    }
    
    //for(int i = 0; i < n; i++){
    //    cout << arx[i] << " " << ary[i] << endl;
    //}
    
    for(int i = 0; i < n; i++){
        if (arx[i] < s){
            s += ary[i];
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}