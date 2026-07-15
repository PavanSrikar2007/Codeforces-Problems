/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 06:55
 * Problem  : B_Niko_s_Tactical_Cards.cpp
 */
#include <bits/stdc++.h>
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
    ll n;cin >> n;
    vll a(n),b(n);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,n){
        cin >> b[i];
    }
    vll dp1(n+1,0),dp2(n+1,0);
    dp1[0]=0ll,dp2[0]=0ll;
    f(i,1,n+1){
        dp1[i] = max(dp1[i-1]-a[i-1],b[i-1]-dp2[i-1]);
        dp2[i] = min(dp2[i-1]-a[i-1],b[i-1]-dp1[i-1]);
    }
    cout << max(dp1[n],dp2[n]) << endl;

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