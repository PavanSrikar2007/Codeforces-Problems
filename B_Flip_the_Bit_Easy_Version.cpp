/**
 * Author   : Pavan Srikar
 * Created  : 2026-04-07 20:13
 * Problem  : B_Flip_the_Bit_Easy_Version.cpp
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
    vector<int> b(k);
    f(i,0,n){
        cin >> a[i];
    }
    int kind;cin >> kind;
    // f(i,0,k){
    //     cin >> b[k];
    // }
    // int left=0,right=0;
    // for(int i=kind;i<n;i++){
    //     if(a[i]==a[i-1]){
    //         continue;
    //     }
    //     right++;
    // }
    // for(int j=n-1;j>=kind-1;j--){
    //     if(a[j]!=a[kind-1]){
    //         break;
    //     }else{
    //         right--;
    //     }
    // }
    // for(int i=kind-2;i>=0;i--){
    //     if(a[i]==a[i+1]){
    //         continue;
    //     }
    //     left++;
    // }
    // for(int j=0;j<kind;j++){
    //     if(a[j]!=a[kind-1]){
    //         break;
    //     }else{
    //         left--;
    //     }
    // }
    // if(left%2!=0){
    //     left+=1;
    // }
    // if(right%2!=0){
    //     right+=1;
    // }

    int left = 0;
    int curl = a[kind-1];
    
    for (int i =0;i<=kind-1;i++) {
        if (a[i] != curl) {
            left++;
            curl = a[i];
        }
    }

    int right = 0;
    int curr = a[kind-1];
    for (int i=n-1;i>=kind-1;i--) {
        if (a[i] != curr) {
            right++;
            curr = a[i];
        }
    }


    cout << max(left,right) << endl;


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

