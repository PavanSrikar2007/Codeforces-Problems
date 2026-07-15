#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int k;cin >> k;
        vector<int> a(n);
        string ans = "NO";
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==k){
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
}