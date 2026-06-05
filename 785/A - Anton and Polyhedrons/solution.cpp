#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, a = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        
        if (s == "Tetrahedron") a+=4;
        else if (s == "Cube") a+=6;
        else if (s == "Octahedron") a+=8;
        else if (s == "Dodecahedron") a+=12;
        else if (s == "Icosahedron") a+=20;
    }
    cout << a << endl;
    return 0;
}