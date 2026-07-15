/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-21 14:43
 * Problem  : C_Traffic_Light.cpp
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

int bs(int ind,vi &g_index){
    int l=0,r=g_index.size()-1;
    int ans=g_index.size();
    while(l<=r){
        int mid=l+(r-l)/2;
        if (g_index[mid] >= ind) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

void solve() {
    int n;cin >> n;
    char curr_clr;cin >> curr_clr;
    string s;cin>> s;
    vi g_ind,time;
    int firstg=-1;
    f(i,0,s.size()){
        if(s[i]=='g'){
            g_ind.push_back(i);
        }
        if(s[i]=='g' && firstg==-1){
            firstg=i;
        }
    }
    g_ind.push_back(s.size()+firstg);
    f(i,0,s.size()){
        if(s[i]==curr_clr){
            int pos = bs(i, g_ind);          
            int dist = g_ind[pos] - i;      
            time.push_back(dist);
        }
    }
    int mx=0;
    f(i,0,time.size()){
        mx=max(mx,time[i]);
    }
    cout << mx << endl;
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