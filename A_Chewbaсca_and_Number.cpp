/**
 * Author   : Pavan Srikar
 * Created  : 2026-03-19 23:24
 * Problem  : A_Chewbaсca_and_Number.cpp
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
    string s;cin >> s;
    f(i,0,s.size()){
        if(s[i]=='5'){
            s[i]='4';
        }
        if(s[i]=='6'){
            s[i]='3';
        }
        if(s[i]=='7'){
            s[i]='2';
        }
        if(s[i]=='8'){
            s[i]='1';
        }
        if(i!=0 && s[i]=='9'){
            s[i]='0';
        }
    }
    cout << s << endl;

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