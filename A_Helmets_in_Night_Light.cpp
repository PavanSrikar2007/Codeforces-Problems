#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        long long int cost = 0;
        long long int ann_reach=0;
        long long int n,p;cin >> n >> p;
        vector<long long int> a(n);
        vector<long long int> b(n);
        long long int min_b = 1e6;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int j=0;j<n;j++){
            cin >> b[j];
            if(min_b>b[j]){
                min_b=b[j];
            }
        }

        vector<pair<long long int,long long int>> vp(n);
        for(int i=0;i<n;i++){
            vp[i].first = b[i];
            vp[i].second = a[i];
        }
        sort(vp.begin(),vp.end());

        ann_reach=1;
        cost += p;
        for(int i=0;i<n;i++){
            if(ann_reach>=n){
                break;
            }

            if(vp[i].first>=p){
                break;
            }

            cost+= vp[i].first*(min(vp[i].second,n-ann_reach));
            ann_reach+=min(vp[i].second,n-ann_reach);
        }
        
        cout << cost + (n-ann_reach)*p << endl;
            
    }
}