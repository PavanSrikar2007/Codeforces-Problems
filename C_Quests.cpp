/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-14 20:07
 * Problem  : C_Quests.cpp
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
    int n,k;cin >> n >>k;
    vi a(n),b(n);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,n){
        cin >> b[i];
    }
    int ai=0,bi=0,maxb=0,ans=0;
    f(i,0,min(n,k)){
        ai+=a[i];
        maxb=max(b[i],maxb);
        ans=max(ans,ai+maxb*(k-i-1));
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