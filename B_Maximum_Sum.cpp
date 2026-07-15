/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-21 00:29
 * Problem  : B_Maximum_Sum.cpp
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
    ll n,k;cin >> n >> k;
    vector<ll> a(n);
    vector<ll> psum(n+1);
    f(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    psum[0]=0;
    f(i,1,n+1){
        psum[i]=psum[i-1]+a[i-1];
    }
    ll ans=0;
    f(i,0,k+1){
        ans=max(ans,psum[n-(k-i)]-psum[2*i]);
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