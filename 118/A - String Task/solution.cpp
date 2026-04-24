#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  string s;
  string t = "";
  cin >> s;
  
  for(size_t i = 0; i < s.size(); i++){
      char c = s[i];
      if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')){
        t = t + "." + (char)tolower(c);
      }
    }
    
  cout << t << endl;
    
}