#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n;
    int a;
 
    cin >> n;
    
    int ar[n];
    
    for(int i = 0; i < n; i++){
        cin >> a;
        ar[i] = a;
    }
    
    sort(ar, ar + n);
    
    for(int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
    
    return 0;
}