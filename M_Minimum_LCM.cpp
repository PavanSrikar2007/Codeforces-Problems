/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-23 19:02
 * Problem  : M_Minimum_LCM.cpp
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
    int ans=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans=n/i;
            break;
        }
    }
    cout << ans << ' ' << n-ans << endl;
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