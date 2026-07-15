/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-27 19:44
 * Problem  : C_Virus.cpp
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
    ll n,m;cin >> n >> m;
    vi a(m);
    vi b;
    f(i,0,m){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    f(i,1,m){
        b.push_back(a[i]-a[i-1]-1ll);
    }
    b.push_back(a[0]-1ll+n-a[m-1]);
    sort(b.rbegin(),b.rend());
    ll ans = 0ll;
    f(i,0,b.size()){
        if(b[i]-1-4*i>=0){
            ans+=max(1ll,b[i]-1-4*i);
        }
    }
    cout << n-ans <<  endl;


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