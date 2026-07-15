#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long int l,r,k;
        int ans=0;
        cin >> n;
        cin >> l >> r >> k;   
        long long int mleft=k;
        vector<long long int> a;
        for(int i=0;i<n;i++){
            long long int b;
            cin >> b;
            if(b>=l && b<=r){
                a.push_back(b);
            }
        }
        sort(a.begin(),a.end());
        for(auto it = a.begin();it != a.end();++it){
                if(*it>mleft){
                    break;
                }
                mleft-=*it;
                ans++;
            }
        cout << ans << endl;
    }
}