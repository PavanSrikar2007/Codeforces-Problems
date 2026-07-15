/**
 * Author   : Pavan Srikar
 * Created  : 2026-04-07 20:05
 * Problem  : A_The_Equalizer.cpp
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
    int n,k;cin >> n >> k;
    vector<int> a(n);
    int sum=0;
    f(i,0,n){
        cin >> a[i];
        sum+=a[i];
    }
    if(sum%2!=0){
        cout << "YES" << endl;
    }else if(n*k%2==0){
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