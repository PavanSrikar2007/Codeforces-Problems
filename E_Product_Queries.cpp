/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-26 18:51
 * Problem  : E_Product_Queries.cpp
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
vector<bool>present;
int fn(int x,vi &a,vi &dp){
    int len=(int)a.size();
    if(present[x]) return 1;
    int ans=1e9;
    if(dp[x]!=-1) return dp[x];
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(present[i]) ans = min(ans,fn(x/i,a,dp)+1);
            if(present[x/i]) ans = min(ans,fn(i,a,dp)+1);
        }
    }
    return dp[x]=ans;
}

void solve() {
    int n;cin >> n;
    vi dp(n+1,-1);
    present.resize(n+1,false);
    vi a(n);
    int chk=0;
    f(i,0,n){
        cin >> a[i];
        present[a[i]]=true;
    }
    for(int i=1;i<=n;i++){
        cout << ((fn(i,a,dp)==1e9)?-1:fn(i,a,dp))<< ' ';
    }
    cout << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        present.clear();
        solve();
    }
    return 0;
}