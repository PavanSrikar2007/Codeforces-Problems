/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 17:03
 * Problem  : D_Friends_and_the_Restaurant.cpp
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
    vi x(n),y(n),m(n);
    f(i,0,n){
        cin >> x[i];
    }
    f(i,0,n){
        cin >> y[i];
        m[i]=y[i]-x[i];
    }
    sort(m.rbegin(),m.rend());
    int l=0,r=n-1;
    int ct=0;
    while(l<r){
        if(m[l]+m[r]>=0){
            ct++;
            l+=1;
            r-=1;
        }else{
            r-=1;
        }
    }
    cout << ct << endl;
    
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