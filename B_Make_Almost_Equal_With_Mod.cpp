/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-17 19:04
 * Problem  : B_Make_Almost_Equal_With_Mod.cpp
 */
#include <bits/stdc++.h>
#include <climits>
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
    vector<ll> a(n);
    f(i,0,n){
        cin >> a[i];
    }
    ll k=2;
    while(1){
        set<ll> rem;
        f(i,0,n){
            rem.insert(a[i]%k);
        }
        if(rem.size()==2){
            break;
        }
        k*=2;
        rem.clear();
    } 
    cout << k << endl;
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