#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, m, a;
    cin >> n >> m;
    int ar[m];
    
    for(int i = 0; i < m; i++){
        cin >> a;
        ar[i] = a;
    }
    
    sort(ar, ar+m);
    
    // for(int i = 0; i < m; i++){
    //     cout << ar[i] << " ";
    // }
    // cout << endl;
    
    a = ar[m-1];
    for(int i = n-1; i < m; i++){
        // cout << ar[i] << " " << ar[i - n + 1] << endl;
        
        if(ar[i] - ar[i-n+1] < a) a = ar[i] - ar[i-n+1];
    }
    
    cout << a << endl;
}