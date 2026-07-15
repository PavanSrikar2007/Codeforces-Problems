#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long int> b(n);
        vector<long long int> a(n);
        for(int i=0;i<n;i++){
            cin >> b[i];
            a[i]=b[i];
        }
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        long long int cost=0;
        if(k!=1){
        for(int i=0;i<k+1;i++){
            cost+=b[i];
        }
        }
        long long int m=0;
        if(k==1){
        for(int i=1;i<n-1;i++){
            if(m<a[i]){
                m=a[i];
            }
        }
            cost+=max(max(a[0],a[n-1])+m,a[0]+a[n-1]);
        }
        cout << cost << endl;
    }
}