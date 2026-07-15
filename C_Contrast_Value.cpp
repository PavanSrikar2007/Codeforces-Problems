/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-22 00:28
 * Problem  : C_Contrast_Value.cpp
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
    vi b;
    int ans=0;
    f(i,0,n){
        cin >> a[i];
    }
    b.push_back(a[0]);
    f(i,1,n){
        if(a[i]!=a[i-1]){
            b.push_back(a[i]);
        }
    }
    int inc = 0, dec = 0;
    for (int i = 0; i < (int)b.size()-2; i++) {             // b.size() -> return unsigned int so overflow may occur
        if (b[i] < b[i + 1] && b[i + 1] < b[i + 2]) {
            inc++;
        } else if (b[i] > b[i + 1] && b[i + 1] > b[i + 2]) {
            dec++;
        }
    }
    cout << b.size()-inc-dec << endl;
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