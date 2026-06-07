#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    string s, a = "";
    cin >> s;
    
    int i = 0;
    while(i < size(s)){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            a = a + " ";
            i += 3;
        }
        else{
            a = a + s[i];
            i++;
        }
    }
    
    int j = 0;
    while(j < size(a)){
        if (a[j] == ' ' && a[j+1] == ' '){
            j++;
            continue;
        }
        if (j == 0 && a[j] == ' '){
            j++;
            continue;
        }
        if (j == size(a) - 1 && a[j] == ' '){
            j++;
            continue;
        }
        
        cout << a[j];
        j++;
        
    }
    
    return 0;
}