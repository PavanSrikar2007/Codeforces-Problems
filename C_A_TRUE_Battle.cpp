#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        string ans = "NO";
        cin >> n;
        string s;
        cin >> s;
        if((int)s.find("11")>=0){
            ans = "YES";
        }
        else if((int)s.find('1')>=0){
            if(s[0]=='1'){
                ans = "YES";
            }
            if(s[n-1]=='1'){
                ans = "YES";
            }
        }
        cout << ans << "\n";
    }
}