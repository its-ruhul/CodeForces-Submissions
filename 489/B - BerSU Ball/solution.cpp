#include<bits/stdc++.h>
using namespace std;
 
void solve() {
}
 
int main() {
  
    int n, m, a, c = 0;
    vector<int> vb;
    vector<int> vg;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        vb.push_back(a);  
    }
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        cin >> a;
        vg.push_back(a);
    }
    
    sort(vb.begin(), vb.end());
    sort(vg.begin(), vg.end());
    
    int i = 0, j = 0;
    
    while(i < n){
        
        // cout << i << " : " << vb[i] << " ;  " << j << " : " << vg[j] << " ; " << c << " A" << endl;
        
        if(j >= m) break;
        
        if (abs(vb[i] - vg[j]) <= 1){
            c++;
            i++;
            j++;
        }
        else{
            if(max({vg[j], vb[i]}) == vb[i]){
                while(abs(vb[i] - vg[j]) != 1 && abs(vb[i] - vg[j]) != 0){
 
                    // cout << i << " : " << vb[i] << " ;  " << j << " : " << vg[j] << " ; " << c << " B" << endl;
 
                    j++;
                    if(j == m || vb[i] < vg[j]){
                        break;
                    }
                }
 
                // cout << "break" << endl;
            }
            else{
                while(abs(vb[i] - vg[j]) != 1 && abs(vb[i] - vg[j]) != 0){
 
                    // cout << i << " : " << vb[i] << " ;  " << j << " : " << vg[j] << " ; " << c << "; C : ";
                    // cout << abs(vb[i] - vg[j]) << endl;
 
                    i++;
                    if(i == n || vb[i] > vg[j]){
                        break;
                    }
                }
                // cout << "break" << endl;
            }
        }
    }
    
    cout << c << endl;
    
    
    return 0;
}