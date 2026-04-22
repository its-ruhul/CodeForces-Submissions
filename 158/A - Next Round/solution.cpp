#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int n, k;
  
  int a, b, c = 0;
  
  cin >> n >> k >> a;
  
    if(a > 0){
      
      for(int i = 1; i < k; i++){
          cin >> a;
          if (a == 0) {
              cout << i << endl;
              return 0;
          }
      }
      
      cin >> b;
      
      for (int i = k; i < n; i++){
          if (b == a){
            c++;
            cin >> b;
          }
      }
      
      cout << k + c << endl;
  }
  else {
      cout << 0 << endl;
  }
}