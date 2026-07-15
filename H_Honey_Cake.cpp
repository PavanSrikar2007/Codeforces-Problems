/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-18 16:48
 * Problem  : H_Honey_Cake.cpp
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

void get_divisors(int x, vi &v) {
    for(int i=1;i*i<=x;i++){
        if(x % i == 0) {
            v.push_back(i);
            if(i != x/i) v.push_back(x/i);
        }
    }
}

void solve() {
    int w,h,d;cin >> w >> h >> d;
    int n;cin >> n;
    vi div_w,div_h,div_d;
    get_divisors(w, div_w);
    get_divisors(h, div_h);
    get_divisors(d, div_d);
    f(i,0,div_w.size()){
        f(j,0,div_h.size()){
            f(k,0,div_d.size()){
                int x = w/div_w[i];
                int y = h/div_h[j];
                int z = d/div_d[k];
                if(x*y*z*1ll==n*1ll){
                    cout << x-1 << ' ' << y-1 << ' ' << z-1 << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    fastio();
    solve();
    return 0;
}