/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-20 01:00
 * Problem  : D_Odd_Queries.cpp
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
    ll n,q;cin >> n >> q;
    int sum=0;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    f(i,1,n+1){
        cin >> a[i];
        sum+=a[i];
        b[i]=a[i]+b[i-1];
    }
    while(q--){
        ll l,r,k;cin >> l >> r>>k;
        ll ans = b[n]-b[r]+b[l-1];
        if((ans+(r-l+1)*k)%2==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
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