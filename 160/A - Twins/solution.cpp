#include<bits/stdc++.h>
using namespace std;
 
int main() {
  
  int n;
  int a;
  
  cin >> n;
  
  int ar[n];
  int sa[n];
  int ra[n];
  
  for(int i = 0; i < n; i++){
      cin >> a;
      ar[i] = a;
  }
  
  sort(ar, ar + (sizeof(ar) / sizeof(ar[0])), greater<int>());
  
  sa[0] = ar[0];
  for(int i = 1; i < n; i++){
      sa[i] = ar[i] + sa[i-1];
  }
  
  int j;
  for(j = 0; j < n; j++){
      if (sa[j] > sa[n-1] - sa[j]){
          cout << j + 1 << endl;
          //cout << sa[j] << " " << sa[n-1] - sa[j] << endl;
          return 0;
      }
  }
}