/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-17 20:05
 * Problem  : A_Array_Coloring.cpp
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
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    int chk1=0,chk2=0;
    f(i,0,n){
        cin >> a[i].first;
        b[i].first=a[i].first;
        a[i].second=i%2;
        b[i].second=(i+1)%2;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    f(i,0,n-1){
        if(a[i].second==a[i+1].second){
            chk1=1;
        }
        if(b[i].second==b[i+1].second){
            chk2=1;
        }
    }
    if(chk1+chk2<2){
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