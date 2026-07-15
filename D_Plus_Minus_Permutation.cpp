/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-19 13:57
 * Problem  : D_Plus_Minus_Permutation.cpp
 */
#include <algorithm>
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vi vector<ll>
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

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}


void solve() {
    ll n,x,y;cin >> n >> x >> y;
    ll lcm = x*y/gcd(x,y);
    ll xlen = n/x-n/lcm,ylen=n/y-n/lcm;
    ll sumx=0,sumy=0;
    sumy += (ylen*(ylen+1ll))/2;
    sumx += n*xlen-(xlen-1ll)*xlen/2;
    cout << sumx-sumy << endl;
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