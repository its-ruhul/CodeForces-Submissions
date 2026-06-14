#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int bc = n / m * b;
    int ac = (n % m) * a;
    int bm = ceil((float)n / m) * b;
    int mi = min({a * n, ac + bc, bm});
    
    cout << mi << endl;
    return 0;
}