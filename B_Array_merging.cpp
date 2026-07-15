/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-13 16:47
 * Problem  : B_Array_merging.cpp
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
    ll n;cin >> n;
    vll a(n),b(n);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,n){
        cin >> b[i];
    }
    vi ca(2*n+1,0),cb(2*n+1,0);
    int maxa=1,maxb=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            maxa++;
        }else{
            ca[a[i-1]]=max(maxa,ca[a[i-1]]); 
            maxa=1;
        }
    } 
    ca[a[n-1]]=max(maxa,ca[a[n-1]]);
    
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            maxb++;
        }else{
            cb[b[i-1]]=max(maxb,cb[b[i-1]]); 
            maxb=1;
        }
    } 
    cb[b[n-1]]=max(maxb,cb[b[n-1]]); 

    int ans=0;
    for(int i=1;i<=2*n;i++){
        ans=max(ans,ca[i]+cb[i]);
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