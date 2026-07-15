#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int k;cin >> k;
        string s;
        cin>>s;
        int sleptclass = 0;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && i>=j){
                sleptclass+=1;
                j=i;
            }else if(s[i]=='1'){
                j=i+k+1;
            }
        }
        cout << sleptclass << endl;
    }
}