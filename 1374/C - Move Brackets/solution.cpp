#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n;
        string s;
        
        vector<char> v;
        
        cin >> n >> s;
        
        v.push_back('a');
        
        // cout << *(v.end() -1) << endl;
        
        for(int j = 0; j < n; j++){
            
            
            //cout << *(v.end() - 1) << " " << s[j] << " " << v.size() << endl;
            
            // for(const auto& k : v){
            //     cout << k << " ";
            // }
            // cout << endl;
            
            if(*(v.end()-1) == '(' && s[j] == ')') v.pop_back();
            else v.push_back(s[j]);
        }
        
        cout << (v.size() - 1) / 2 << endl;
    }
}