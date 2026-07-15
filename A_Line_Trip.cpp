#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while(t--){
        long long int n,x;
        long long int v=0;
        cin >> n >> x;
        vector<long long int> a(n+1);
        a[0]=0;
        for(long long int i=1;i<=n;i++){
            cin >> a[i];
        }
        for(long long int i=0;i<n;i++){
            a[i]=a[i+1]-a[i];
        }
        a[n]=2*(x-a[n]);
        for(long long int i=0;i<=n;i++){
            if(a[i]>v){
                v=a[i];
            }
        }
        cout << v << endl;
    }
}