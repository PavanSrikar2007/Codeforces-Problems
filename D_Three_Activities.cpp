/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-16 16:28
 * Problem  : D_Three_Activities.cpp
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
    vector<pair<int,int>> a(n),b(n),c(n);
    f(i,0,n){
        cin >> a[i].first;
        a[i].second=i;
    }
    f(i,0,n){
        cin >> b[i].first;
        b[i].second=i;
    }
    f(i,0,n){
        cin >> c[i].first;
        c[i].second=i;
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    int sum=0,ans=0;
    int asum=0,bsum=0,csum=0;
    set<int> check;
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
    for(int k = 0; k < 3; k++) {
            if(a[i].second != b[j].second &&
               a[i].second != c[k].second &&
               b[j].second != c[k].second) {

                ans = max(ans,
                          a[i].first + b[j].first + c[k].first);
            }
        }
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