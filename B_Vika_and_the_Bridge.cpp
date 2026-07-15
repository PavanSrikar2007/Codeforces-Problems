/**
 * Author   : Pavan Srikar
 * Created  : 2026-01-20 23:28
 * Problem  : B_Vika_and_the_Bridge.cpp
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
    vi a(n);
    f(i,0,n){
        cin >> a[i];
    }
    vi prevind(k,-1);
    vi maxdiff(k);
    vi sndmaxdiff(k);
    f(i,0,n){
        int x= a[i]-1;
            int d = i-prevind[x];
            if(d>maxdiff[x]){
                sndmaxdiff[x]=maxdiff[x];
                maxdiff[x]=d;
            }else if(d>sndmaxdiff[x]){
                sndmaxdiff[x]=d;
            }
        prevind[x]=i;
    }
    f(i,0,k){
        int d = n-prevind[i];
        if(d>maxdiff[i]){
            sndmaxdiff[i]=maxdiff[i];
            maxdiff[i]=d;
        }else if(d>sndmaxdiff[i]){
            sndmaxdiff[i]=d;
        }
    }
    int mn=INT_MAX;
    f(i,0,k){
        mn = min(mn,max(sndmaxdiff[i],(maxdiff[i]+1)/2));
    }
    cout << mn-1 << endl;
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