#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        int maxm=0;
        int ct=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(maxm<a[i]){
                maxm = a[i];
            }
        }

        for(int i=0;i<n;i++){
            if(a[i]==maxm){
                ct++;
            }
        }

        if(ct==n){
            cout << -1 << endl;
        }else{
            cout << n-ct << " " << ct << endl;
            for(int i=0;i<n;i++){
                if(a[i]!=maxm){
                    cout << a[i] << " ";
                }
            }
            cout << endl;
            for(int i=0;i<ct;i++){
                cout << maxm << " ";
            }
            cout << endl;
        }
    }
}