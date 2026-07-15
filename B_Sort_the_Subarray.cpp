/**
 * Author   : Pavan Srikar
 * Created  : 2026-02-02 02:47
 * Problem  : B_Sort_the_Subarray.cpp
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
    vi a1(n);
    f(i,0,n) cin >> a1[i];
    vi a2(n);
    f(i,0,n) cin >> a2[i];
    int l,r;
    f(i,0,n){
        if(a1[i]!=a2[i]){
            l=i;
            break;
        }
    }
    f(i,0,n){
        if(a1[n-i-1]!=a2[n-i-1]){
            r=n-i-1;
            break;
        }
    }
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=l;i<=r;i++){
        mn = min(mn,a1[i]);
        mx = max(mx,a1[i]);
    }
    for(int i=l;i>0;i--){
        if(a2[i-1]<=a2[i]){
            l-=1;
        }else break;
    }
    for(int i=r;i<n-1;i++){
        if(a2[i]<=a2[i+1]){
            r+=1;
        }else break;
    }
    cout << max(1,l+1) << ' ' << min(n,r+1) << endl;
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