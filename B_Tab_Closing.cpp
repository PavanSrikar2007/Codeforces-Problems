#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        float a,b,n;cin >> a >> b >> n;
        int ct=0;
        if(b<=a/n || b==a){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
}