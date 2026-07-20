#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    
    int c = 0;
    string s;
    
    for(int i = 1; i <= 10; i++){
        cin >> s;
        
        for(int j = 0; j < 10; j++){
            if(i == 1 || i == 10){
                if(s[j] == 'X') c++;
            }
            
            if((i == 2 || i == 9) && s[j] == 'X'){
                if(j == 0 || j == 9) c++;
                else c += 2;
            }
            
            if((i == 3 || i == 8) && s[j] == 'X'){
                if(j == 0 || j == 9) c++;
                else if (j == 1 || j == 8) c += 2;
                else c += 3;
            }
            
            if((i == 4 || i == 7) && s[j] == 'X'){
                if(j == 0 || j == 9) c++;
                else if (j == 1 || j == 8) c += 2;
                else if (j == 2 || j == 7) c += 3;
                else c += 4;
            }
            
            if((i == 5 || i == 6) && s[j] == 'X'){
                if(j == 0 || j == 9) c++;
                else if (j == 1 || j == 8) c += 2;
                else if (j == 2 || j == 7) c += 3;
                else if (j == 3 || j == 6) c += 4;
                else c += 5;
            }
        }
    }
    
    cout << c << endl;
    
 
    return 0; 
}
 
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        solve();
    }
    
    
    return 0;
}