#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int a, b = 1;
  
  for(int i = 0; i < 25; i++){
      cin >> a;
      
      if (a == 1){
          break;
      }
      
      b++;
  }
  
  int x, y;
  
  if (b % 5 != 0){
      y = b / 5 + 1;
      x = b % 5;
  }
  else {
      y = b / 5;
      x = 5;
  }
 
  if (x - 3 < 0){
      x = - (x - 3);
  }
  else {
      x = x - 3;
  }
  
  if (y - 3 < 0){
      y = - (y - 3);
  }
  else {
      y = y - 3;
  }
  
  cout << x+y << endl;
}