/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-24 17:52
 * Problem  : C_Dora_and_Search.cpp
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
    vi a(n);
    f(i,0,n){
        cin >> a[i];
    }
    int l=0,r=n-1;
    int mn=1,mx=n;
    while(l<r){
        if(a[l]==mn){
            l+=1;
            mn+=1;
        }else if(a[r]==mn){
            r-=1;
            mn+=1;
        }else if(a[r]==mx){
            r-=1;
            mx=mx-1;
        }else if(a[l]==mx){
            l+=1;
            mx=mx-1;
        }else{
            break;
        }
    }
    if(l==r){
        cout << -1 << endl;
    }else{
        cout << l+1 << ' ' << r+1 << endl;
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