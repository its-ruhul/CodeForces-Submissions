#include <bits/stdc++.h>
#include <limits>
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
    
    int n;
    string s;
    cin >> n >> s;
 
    vi v(n+1, 0);
 
    for(int i = 1; i <= n; i++) v[i] += v[i-1] + s[i-1] - '0' - 1 ;
 
    // for(int i = 0; i <= n; i++) cout << v[i] << " ";
    // cout << endl;
 
    unordered_map<int, int> m;
 
    for(int i = 0; i <= n; i++) m[v[i]]++;
 
    ll c = 0;
    for(const auto& i : m){
        // cout << i.se << " ";
        c += (ll)i.se * (i.se - 1) / 2;
    }
    // cout << endl;
 
    cout << c << endl;
 
    return;
 
}
 
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
    // freopen("hps.in", "r", stdin);
    // freopen("hps.out", "w", stdout);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}