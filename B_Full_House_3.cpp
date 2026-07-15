#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    vector<int> a(7);
    vector<int> b(14,0);
    string ans = "No";
    int ct2=0,ct3=0,ct21=0,ct31=0;
    for(int i=0;i<7;i++){
        cin >> a[i];
        b[a[i]]++;
    }
    int j=0;
    for(int i=1;i<=13;i++){
        if(b[i]>=2&&j==0){
            ct2=1;
            j=i;
        }
        if(b[i]>=3&&i!=j){
            ct3=1;
        }
    }
     j=0;
    for(int i=1;i<=13;i++){
        if(b[i]>=3&&j==0){
            ct21=1;
            j=i;
        }
        if(b[i]>=2&&i!=j){
            ct31=1;
        }
    }

    if(ct2==1&&ct3==1){
        ans = "Yes";
    }
    if(ct21==1&&ct31==1){
        ans = "Yes";
    }
    cout << ans << endl;
}