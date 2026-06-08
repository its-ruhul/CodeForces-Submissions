#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    string s, a;
    bool cOn = 1;
    cin >> s;
    
    for(int i = 1; i < size(s); i++){
        if (islower(s[i])){
            cOn = 0;
            break;
        }
    }
    
    if (cOn == 0){
        cout << s << endl;
    }
    else{
        if (islower(s[0])){
            cout << (char)toupper(s[0]);
        }
        else{
            cout << (char)tolower(s[0]);
        }
        
        for(int i = 1; i < size(s); i++){
            cout << (char)tolower(s[i]);
        }
        cout << endl;
    }
}