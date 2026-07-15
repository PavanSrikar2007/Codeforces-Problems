/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-19 01:31
 * Problem  : B_2_D_Traveling.cpp
 */
#include <bits/stdc++.h>
#include <climits>
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
    ll n,k,a,b;cin >> n >> k >> a >> b;
    a--,b--;
    vector<pair<ll,ll>> points(n);
    f(i,0,n){
        cin >> points[i].first >> points[i].second;
    }
    ll adist=1e10*1ll,bdist=1e10*1ll;
    if(a<k){
        adist=0;
    }
    if(b<k){
        bdist=0;
    }
    f(i,0,k){
        adist=min(adist,(abs(points[i].first-points[a].first)+abs(points[i].second-points[a].second)));
        bdist=min(bdist,(abs(points[i].first-points[b].first)+abs(points[i].second-points[b].second)));
    }
    if(abs(points[a].first-points[b].first)+abs(points[a].second-points[b].second)<adist+bdist){
        cout << abs(points[a].first-points[b].first)+abs(points[a].second-points[b].second) << endl;
    }else{
        cout << adist+bdist << endl;
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