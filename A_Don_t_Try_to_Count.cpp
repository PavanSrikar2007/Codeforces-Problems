#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int ans = -1;
        for(int i=0;i<=5;i++){
            if((int)x.find(s)!=-1){
                ans = i;
                break;
            }else{
                x=x+x;
            }
        }
        cout << ans << endl;
    }
}