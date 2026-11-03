#include <bits/stdc++.h>
using namespace std;
 
// --- Type Aliases ---
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
// --- Common Shortcuts ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define fi first
#define se second
 
// --- Constants ---
const int INF = 1e9 + 7;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
 
void solve() {
    
    ll n, t, a, m = 0;
    cin >> n >> t;
 
    vll v(n+1);
 
    for(ll i = 1; i <= n; i++){
        cin >> a;
        v[i] = v[i-1] + a;
    }
 
    ll i = 0, j = 1;
 
    while(j <= n){
        if(v[j] - v[i] <= t){
            m = max({m, j-i});
            // cout << j << " " << i << endl;
            j++;
        }
        else{
            i++;
        }
    }
     
    cout << m << endl;
 
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
 
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
 
    while (t--) {
        solve();
    }
 
    return 0;
}