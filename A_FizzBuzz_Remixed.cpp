#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int r= n%15;
        if(r>=2){
            r=2;              // These numbers were to be counted
        }
        int q = n/15;                   // 0   1  2
        int ans;                        // 15 16 17
        if(r==2){                       // 30 31 32
            ans = 3*(q+1);
        }
        if(r==1){
            ans = 3*(q+1)-1;
        }
        if(r==0){
            ans = 3*(q+1)-2;
        }
        cout << ans << endl;
    }
}