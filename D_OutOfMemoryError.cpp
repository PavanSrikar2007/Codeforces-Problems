/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-18 20:19
 * Problem  : D_OutOfMemoryError.cpp
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
    int n,m,h;cin >> n >> m >> h;
    vi a(n);
    vi b(n,0);
    vi c;
    f(i,0,n){
        cin >> a[i];
    }
    vector<pair<int,int>> bc(m);
    f(i,0,m){
        cin >> bc[i].first;
        cin >> bc[i].second;
        bc[i].first-=1;
    }
    for(int i=0;i<m;i++){
        if(a[bc[i].first]+b[bc[i].first]+bc[i].second>h){
            f(i,0,c.size()){
                b[c[i]]=0;
            }
            c.clear();
        }else{
            b[bc[i].first]+=bc[i].second;
            c.push_back(bc[i].first);
        }
    }
    
    f(i,0,n){
        cout << a[i]+b[i] << ' ';
    }
    cout << endl;
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