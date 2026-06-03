#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  string s;
  string a = "";
  string h = "hello";
  int j = 0;
  
  cin >> s;
  
  for(int i = 0; i < s.size(); i++){
      
      if (j == 5){
          break;
      }
      
      if (s[i] == h[j]){
          a += h[j];
          j++;
      }
  }
  
  if (a == "hello"){
      cout <<  "YES" << endl;
  }
  else {
      cout << "NO" << endl;
  }
  
}