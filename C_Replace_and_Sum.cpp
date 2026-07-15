/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 20:57
 * Problem  : C_Replace_and_Sum.cpp
 */
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vi vector<ll>
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
    ll n,q;cin >> n >> q;
    vi a(n+2,0),b(n+2,0);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,n){
        cin >> b[i];
    }
    vi psum(n+1,0),maxb(n);
    maxb[n-1]=b[n-1];
    for(int i=n-2;i>=0;i--){
        maxb[i]=max(maxb[i+1],b[i]);
    }
    for(int i=n-1;i>=0;i--) a[i] = max({a[i], a[i + 1], b[i]});
    psum[0]=0;
    f(i,1,n+1){
        psum[i]=psum[i-1]+a[i-1];
    }
    while(q--){
        int l,r;cin >> l >> r;
        l-=1;
        cout << psum[r]-psum[l] << ' ';
    }
    cout << endl;
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