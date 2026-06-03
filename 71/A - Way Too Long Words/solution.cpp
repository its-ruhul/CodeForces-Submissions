#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
 
  for(int i = 0; i < t; i++){
      
    string s;
    cin >> s;
    int last = s.length() - 1;
    
    if (s.length() > 10){
        cout << s[0] << s.length() - 2 << s[last] << endl;
    }
    else {
        cout << s << endl;
    }
  }
 
  return 0;
}