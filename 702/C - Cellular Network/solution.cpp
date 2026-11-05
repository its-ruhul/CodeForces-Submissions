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
    
    ll n, m;
    cin >> n >> m;
 
    vll vn(n);
    vll vm(m);
 
    for(ll i = 0; i < n; i++){
        cin >> vn[i];
    }
 
    for(ll i = 0; i < m; i++){
        cin >> vm[i];
    }
    vm.push_back(LINF);
 
    ll i = 0, j = 0, r = 0;
 
    while(i < n){
        if(abs(vm[j] - vn[i]) < abs(vm[j+1] - vn[i])){
            r = max({r, abs(vm[j] - vn[i])});
        }
        else{
            while(abs(vm[j] - vn[i]) >= abs(vm[j+1] - vn[i])){
                j++;
            }
            r = max({r, abs(vm[j] - vn[i])});
        }
        i++;
    }
 
    cout << r << endl;
 
    return;
}
 
int main() {
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
 
    // freopen("pairup.in", "r", stdin);
    // freopen("pairup.out", "w", stdout);
 
    while (t--) {
        solve();
    }
 
    return 0;
}