/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 15:44
 * Problem  : C_Removing_Smallest_Multiples.cpp
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
    string s;cin >> s;
    vector<bool> a(n+1);
    f(i,1,n+1){
        a[i]=(s[i-1]=='1');
    }
    ll ans =0;
    vi cost(n+1);
    for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j += i) {
        if(a[j]==1) break;          
        if(cost[j] == 0)  cost[j]=i;          
    }
}
    for(int i=1;i<n+1;i++){
        if(a[i]==0){
            ans+=cost[i];
        }
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