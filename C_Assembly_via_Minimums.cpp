/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-19 17:23
 * Problem  : C_Assembly_via_Minimums.cpp
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
    int n;cin >> n;
    int m = n*(n-1)/2;
    vi b(m);
    f(i,0,m){
        cin >> b[i];
    }
    sort(b.begin(),b.end());
    for(int i=0;i<m;i+=n){
        n--;
        cout << b[i] << ' ';
    }
    cout << 1000000000 << endl;
    
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