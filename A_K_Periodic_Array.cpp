#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    cin >> n >> k;
    int ans=0;
    vector<int> a(n);
    vector<int> b(k);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<k;i++){
        int ct1=0,ct2=0;
        for(int j=i;j<n;j=j+k){
          if(a[j]==1){
            ct1++;
          }else{
            ct2++;
          }
        }
        b[i]=ct1>=ct2?1:2;
    }
    for(int i=0;i<k;i++){
        for(int j=i;j<n;j=j+k){
            if(a[j]!=b[i]){
                ans++;
            }
        }
    }
    cout << ans ;
}