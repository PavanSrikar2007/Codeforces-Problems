/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-23 16:39
 * Problem  : A_Counting_Orders.cpp
 */
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define f(x,a,b) for(ll x=a;x<b;x++)
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
    vector<ll> a(n),b(n);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,n){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<ll> c(n,0);
    ll j=0,i=0;
    while(i<n && j<n){
        if(a[j]>b[i]){
            c[i]=n-j;
            i++;
        }else{
            j++;
        }
    }
    ll ans=1ll;
    f(i,0,n){
        ans=ans*(max(0ll,(c[i]-(n-i-1ll)))%MOD);
        ans=ans%MOD;
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