#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  string a,b;
 
  cin >> a;
  cin >> b;
  
  for(int i = 0; i < a.size(); i++){
      if (tolower(a[i]) > tolower(b[i])){
          cout << 1 << endl;
          return 0;
      }
      else if(tolower(a[i]) < tolower(b[i])){
          cout << -1 << endl;
          return 0;
      }
      
      //cout << tolower(a[i]) << tolower(b[i]) << endl;
  }
  
  cout << 0 << endl;
  return 0;
}