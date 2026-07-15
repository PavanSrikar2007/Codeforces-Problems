/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-17 20:12
 * Problem  : B_MEX_Reordering.cpp
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
    vi a(n);
    int ct0=0,ct1=0;
    f(i,0,n){
        cin >> a[i];
        if(a[i]==0){
            ct0++;
        }
        if(a[i]==1){
            ct1++;
        }
    }
    if(ct0==0){
        cout << "NO" << endl;
    }else if(ct0==1){
        cout << "YES" << endl;
    }else if(ct1==0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
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