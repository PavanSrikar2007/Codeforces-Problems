#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
        int ct1=0,ct0=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==1){
            ct1++;
        }else{
            ct0++;
        }
    }
    if(ct1>ct0){
        cout << "BOB" << endl;
    }else if(ct0>ct1){
        cout << "ALICE" << endl;
    }else{
        cout << "TIE" << endl;
    }
}