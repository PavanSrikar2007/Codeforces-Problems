#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long int t;
    cin >> t;
    while(t--){
        long long int continuous_dots=0,task1=0;
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        s+='#';
        for(long long int i=0;i<=n;i++){
            if(s[i]=='#'){
                 if(continuous_dots>2){
                    task1=2;
                    break;
                 }else{
                    task1+=continuous_dots;
                 }
                 continuous_dots=0;
            }else {
                continuous_dots++;
            }
        }
        cout << task1 << endl;
    }
}