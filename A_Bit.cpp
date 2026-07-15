/**
 * Author   : Pavan Srikar
 * Created  : 2026-03-19 23:15
 * Problem  : A_Bit.cpp
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
    int x=0;
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;getline(cin,s);
        if(s[1]=='+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x << endl;
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