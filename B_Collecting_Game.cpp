/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-16 00:50
 * Problem  : B_Collecting_Game.cpp
 */
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vi vector<ll>
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
    vector<pair<ll,ll>> a(n);
    f(i,0,n){
        cin >> a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    vi prefix_sum(n,0);
    prefix_sum[0]=a[0].first;
    f(i,1,n){
        prefix_sum[i]=prefix_sum[i-1]+a[i].first;
    }
    vector<ll> ans(n);
    for (int i = 0; i < n; i++) {
			int j = i;
			int found = i;
			while (j < n) {
				pair<ll, ll> temp = {prefix_sum[j] + 1, INT_MIN};
				ll idx = lower_bound(a.begin(), a.end(), temp) - a.begin();
				idx--;
				if (idx == j) {
					break;
				}
				found += idx - j;
				j = idx;
			}
			ans[a[i].second] = found;
		}
    f(i,0,n){
        cout << ans[i] << ' ';
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