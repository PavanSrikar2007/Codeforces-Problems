/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-14 18:45
 * Problem  : B_Erase_First_or_Second_Letter.cpp
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
    vi charpresent(26,0);
    vi diff_chars_till_i(n);
    int diff_chars_total=0;
    f(i,0,n){
        if(charpresent[s[i]-97]==0){
            diff_chars_total++;
        }
        diff_chars_till_i[i]=diff_chars_total;
        charpresent[s[i]-97]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=diff_chars_till_i[i];
    }
    cout << ans << endl;
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