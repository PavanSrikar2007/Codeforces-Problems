/**
 * Author   : Pavan Srikar
 * Created  : 2026-03-19 23:49
 * Problem  : A_Beautiful_Matrix.cpp
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
    f(i,0,5){
        f(j,0,5){
            int x;cin >> x;
            if(x==1){
                cout << abs(i-2) + abs(j-2) << endl;
            }
        }
    }
}

int main() {
    fastio();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}