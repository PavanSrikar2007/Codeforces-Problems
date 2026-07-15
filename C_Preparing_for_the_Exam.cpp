#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(){
    int t,n,m,k;
    ll sum,no;
    cin >> t;
    while(t--){
        sum = 0;
        cin >> n >> m >> k;
        vector<int> a(m);
        vector<int> q(k);
        for(int i=0;i<m;i++){
            cin >> a[i];
        }
        for(int i=0;i<k;i++){
            cin >> q[i];
            sum = sum+q[i];
        }
        for(int i=0;i<m;i++){
            if(n==k){
                cout << 1;
            }else if(k<n-1){
                cout << 0;
            }else{
                no = (ll)n*(n+1)/2 - sum;
                if(a[i]==no){
                    cout << 1;
                }else{
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}


