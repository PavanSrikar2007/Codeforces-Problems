/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-13 20:09
 * Problem  : D_Distinct_Split.cpp
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
    vi a(26,0);
    vi b(26,0);
    vi psum(n,0),rpsum(n,0);
    int sum=0;
    a[s[0]-97]++,b[s[n-1]-97]++;
    psum[0]=1,rpsum[n-1]=1;
    f(i,1,n){
        psum[i]=psum[i-1]+((a[s[i]-97]==0)?1:0);
        a[s[i]-97]++;
     }
    for(int i=n-2;i>=0;i--){
        rpsum[i]=rpsum[i+1]+((b[s[i]-97]==0)?1:0);
        b[s[i]-97]++;
    }
    int ans=0,ansl=0,ansr=0,ind=0;
    for(int i=0;i<n-1;i++){
        ans=max(ans,psum[i]+rpsum[i+1]);
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