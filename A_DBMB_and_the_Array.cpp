/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 20:06
 * Problem  : A_DBMB_and_the_Array.cpp
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
    int n,s,x;cin >> n >> s >> x;
    vi a(n);
    f(i,0,n){
        cin >> a[i];
    }
    int sum=0;
    f(i,0,n){
        sum+=a[i];
    }
    if(((sum-s)%x==0) && (s>=sum)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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