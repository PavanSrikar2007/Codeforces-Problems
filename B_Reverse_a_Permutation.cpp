/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-25 20:11
 * Problem  : B_Reverse_a_Permutation.cpp
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
    vi a(n+1);
    f(i,1,n+1){
        cin >> a[i];
    }
    int ind=1;
    for(int i=1;i<=n;i++){
        if(a[i]!=n-i+1){
            ind=i;
            break;
        }
    }
    int id=-1;
    for(int i=ind;i<=n;i++){
        if(a[i]==n-ind+1){
            id=i;
        }
    }
    f(i,1,ind){
        cout << a[i] << ' ';
    }
    if(id!=-1){
        for( int i = id; i >= ind; i -- ) cout << a[i] << ' ';
		for( int i = id + 1; i <= n; i ++ ) cout << a[i] << ' ';
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