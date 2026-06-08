#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, a, c1=0, c2=0, c3=0, c4=0, cn = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        if(a == 1) c1++;
        else if(a == 2) c2++;
        else if(a == 3) c3++;
        else c4++;
    }
    
    //cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    
    if (c3 >= c1){
        c4 += c1;
        c3 -= c1;
        c1 = 0;
    }
    else{
        c4 += c3;
        c1 -= c3;
        c3 = 0;
    }
    
    //cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    
    c4 += c2 / 2;
    c2 = c2 % 2;
    
    //cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    
    if (c2 == 1 && c1 >= 2){
        c4++;
        c2 = 0;
        c1 -= 2;
    }
    else if (c2 == 1 && c1 == 1){
        c4++;
        c2 = 0;
        c1 -= 1;
    }
    
    //cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    
    if (c1 % 4 == 0){
        c4 += c1 / 4;
        c1 = 0;
    }
    else {
        c4 += c1 / 4 + 1;
        c1 = 0;
    }
    
    //cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    
    cout << c4 + c3 + c2 + c1 << endl;
}