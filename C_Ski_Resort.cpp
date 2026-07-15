#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long int n,k,q;
        cin >> n >> k >> q;
        vector<int> a(n);
        vector<int> b(n+1,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<=q){
                b[i]=1;
            }
        }
        b[n]=0;
        long long int ct=0;
        long long int ans=0;
        for(int i=0;i<=n;i++){
            if(b[i]==1){
                ct++;
            }else{
                long long int x = (ct-k+1>0)?ct-k+1:0;
                ans += x*(x+1)/2;
                ct=0;
            }
        }
        cout << ans << endl;
    }
}