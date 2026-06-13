#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    int i = 0;
    while(i < size(s)){
        if (s[i] == '-'){
            if (s[i+1] == '-') cout << 2;
            else cout << 1;
            
            i+=2;
        }
        else{
            cout << 0;
            i++;
        }
    }
    cout << endl;
    return 0;
    
}