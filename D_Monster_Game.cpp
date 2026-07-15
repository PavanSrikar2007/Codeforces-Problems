/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-26 15:39
 * Problem  : D_Monster_Game.cpp
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

ll bs(ll swords,vi &b){
    ll l=0,r=(ll)b.size()-1;
    ll mid,ans=-1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(b[mid] <= swords){
            ans = mid;
            l = mid + 1;   
        } else {
            r = mid - 1;
        }
    }
    if (ans == -1) return 0ll;  
    return ans+1;
}

void solve() {
    int n;cin >> n;
    vi a(n),b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
    f(i,1,n) b[i]+=b[i-1];
    sort(a.rbegin(),a.rend());
    ll x=0,swords=0;
    ll score=0,new_score;
    f(i,0,n){
        x=a[i];
        swords++;
        new_score=bs(swords,b)*x;
        score=max(score,new_score);
    }
    cout  << score <<endl;
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