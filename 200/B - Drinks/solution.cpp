#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int t;
  int a;
  float s = 0;
  
  cin >> t;
  
  for (int i = 0; i < t; i++){
      cin >> a;
      s += a;
  }
  
  cout << s / t << endl;
  
}