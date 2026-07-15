#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string ans = "NO";
        int x; cin >> x;
        if(x%33==0){
            ans = "YES";
        }
        cout << ans << endl;
    }
}