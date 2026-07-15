#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string ans = "NO";
        vector<int> a(n);
        int ct0 = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0){
                ct0++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]==0 && a[i+1]==0){
                ans = "YES";
            }
        }
        if(ct0==0){
            ans = "YES" ;
        }
        cout << ans << endl;
    }
}