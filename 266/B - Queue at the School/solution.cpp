#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int l, t;
  string s;
  
  cin >> l >> t >> s;
  
  for(int i = 0; i < t; i++){
      for(int j = 1; j < l; j++){
          if(s[j] == 'G' && s[j-1] == 'B'){
              s[j] = 'B';
              s[j-1] = 'G';
              j++;
          }
      }
      
  }
  
  cout << s << endl;
}