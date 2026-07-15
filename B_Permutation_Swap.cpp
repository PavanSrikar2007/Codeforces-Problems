/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-20 00:47
 * Problem  : B_Permutation_Swap.cpp
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

int gcd(int a,int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;cin >> n;
    vi a(n);
    vi b;
    f(i,0,n){
        cin >> a[i];
        b.push_back(abs(a[i]-i-1));
    }
    sort(b.begin(),b.end());
    int ans=0;
    f(i,0,b.size()){
        ans=gcd(ans,b[i]);
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