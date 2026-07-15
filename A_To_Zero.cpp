#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int ct=0;
        while(n>k){
        if(n%2==0){
            ct=ct+n/(k-1);
            n=n%(k-1);
        }else{
            n=n-(k);
            ct++;
        }
        }
         if(n>0){
                cout << ct+1 << endl;
            }else{
                cout << ct << endl;
            }
    }
}