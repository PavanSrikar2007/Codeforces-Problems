/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-19 06:12
 * Problem  : E_Cardboard_for_Pictures.cpp
 */
#include <algorithm>
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

ll chk(vector<ll> cp,ll w,ll c){
    ll total_cardboard=0;
    f(i,0,cp.size()){
        total_cardboard+=(cp[i]+2ll*w)*(cp[i]+2ll*w);
        if(total_cardboard>c){
            break;
        }
    }
    return total_cardboard;
}

void solve() {
    ll n,c;cin >> n>>c;
    vector<ll> a(n);
    f(i,0,n){
        cin >> a[i];
    }
    ll l=0,r=1e9;
    ll mid;
    while(l<r){
        mid=l-(l-r-1)/2;
        if(chk(a,mid,c)>c){
            r=mid-1;
        }else if(chk(a,mid,c)<=c){
            l=mid;
        }
    }
    cout << l << endl;
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