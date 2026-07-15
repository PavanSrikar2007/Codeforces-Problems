/**
 * Author   : Pavan Srikar
 * Created  : 2026-02-02 03:28
 * Problem  : A_Divisible_Permutation.cpp
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
    vi p;
    int x=n/2+1;
    p.push_back(x);
    f(i,2,n+1){
        if(i%2==0){
            x=x-i+1;
            p.push_back(x);
        }else{
            x=x+i-1;
            p.push_back(x);
        }
    }
    f(i,0,n){
        cout << p[i] << ' ';
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