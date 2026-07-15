/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-17 18:29
 * Problem  : B_250_Thousand_Tons_of_TNT.cpp
 */
#include <bits/stdc++.h>
#include <climits>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define f(x,a,b) for(int x=a;x<b;x++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
const int MOD = 1e9 + 7;

using namespace std;

void solve() {
    int n;cin >> n;
    vi a(n);
    f(i,0,n){
        cin >> a[i];
    }
    ll ans = -1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            ll mx = -1e18, mn = 1e18;
            for (int j = 0; j < n; j += i) {
                ll sum = 0;
                for (int k = j; k < j + i; k++) {
                    sum += a[k];
                }
                mx = max(mx, sum);
                mn = min(mn, sum);
            }
            ans = max(ans, mx - mn);
        }
    }
    cout << ans << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}