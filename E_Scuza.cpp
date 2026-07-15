/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 14:52
 * Problem  : E_Scuza.cpp
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

ll BS(ll x,vi &a){
    ll n=(ll)a.size();
    ll l=0,r=n-1;
    ll mid,ans=-1;
    while(l<=r){
        mid = l+(r-l)/2;
        if(a[mid]<=x){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;
}

void solve() {
    ll n,q;cin >> n >> q;
    vi a(n),k(q);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,q){
        cin >> k[i];
    }
    vi psum(n);
    psum[0]=a[0];
    f(i,1,n){
        psum[i]=psum[i-1]+a[i];
    }
    f(i,0,n-1){
        if(a[i]>a[i+1]){
            a[i+1]=a[i];
        }
    }
    f(i,0,q){
        ll ind = BS(k[i],a);
        if(ind==-1){
            cout << 0 << ' ';
        }else{
            cout << psum[ind] << ' ';
        }
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