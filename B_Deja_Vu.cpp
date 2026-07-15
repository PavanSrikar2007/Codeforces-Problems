/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-18 15:53
 * Problem  : B_Deja_Vu.cpp
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

vector<ll> precomp(31);

void solve() {
    int n,q;cin >> n >> q;
    vector<ll> a(n),x(q);
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,q){
        cin >> x[i];
    }
    ll min_x = LLONG_MAX;
    f(i,0,n){
        if(a[i]%precomp[x[0]]==0){
            min_x=min(min_x,x[0]);
            a[i]+=precomp[x[0]-1];
        }
    }
    f(i,1,q){
        if(x[i]<min_x){
            f(j,0,n){
                min_x=min(min_x,x[i]);
                if(a[j]%precomp[x[i]]==0){
                    a[j]+=precomp[x[i]-1];
                }
            }   
        }
    }
    f(i,0,n){
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {
    precomp[0]=1ll;
    f(i,1,31){
        precomp[i]=precomp[i-1]*2ll;
    }
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}