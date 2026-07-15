/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-24 14:47
 * Problem  : A_Frog_1.cpp
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

vi dp(1e5+1,0);

void solve() {
    int n;cin >> n;
    vi h(n+1,0);
    f(i,1,n+1){
        cin >> h[i];
    }
    dp[1]=0;
    dp[2]=abs(h[2]-h[1]);
    f(i,3,n+1){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n] << endl;
}

int main() {
    fastio();
    solve();
    return 0;
}