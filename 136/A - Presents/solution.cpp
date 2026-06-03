#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, a;
    cin >> n;
    
    int ar[n+1];
    
    for(int i = 1; i < n+1; i++){
        cin >> a;
        ar[a] = i;
    }
    
    for(int i = 1; i < n+1; i++){
        cout << ar[i] << ' ';
    }
    return 0;
}