#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int n;
  
  cin >> n;
  
  for(int i = 2; i <= n ; i++){
      int d = n % i;
      
      //checks if divisors
      if (d == 0){
 
          bool l = 0;
          int f = i;
          
          while(f != 0){
              if (f % 10 == 4 || f % 10 == 7){
                  l= 1;
                  f = f / 10;
              }
              else {
                  l = 0;
                  break;
              }
          }
          
          if (l == 1) {
              cout << "YES" << endl;
              return 0;
          }
      }
  }
  
  cout << "NO" << endl;
}