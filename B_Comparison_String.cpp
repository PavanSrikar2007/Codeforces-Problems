/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-20 00:34
 * Problem  : B_Comparison_String.cpp
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
    string s;cin >> s;
    int len=1,mxlen=1;
    f(i,1,n){
        if(s[i]==s[i-1]){
            len++;
            mxlen=max(mxlen,len);
        }else{
            len=1;
        }
    }
    cout << mxlen+1 << endl;
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