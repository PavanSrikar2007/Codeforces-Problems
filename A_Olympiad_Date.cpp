#include <bits/stdc++.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int ct0=0,ct1=0,ct2=0,ct3=0,ct5=0,ct=0,no=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0){
                ct0++;
            }
            if(a[i]==1){
                ct1++;
            }
            if(a[i]==2){
                ct2++;
            }
            if(a[i]==3){
                ct3++;
            }
            if(a[i]==5){
                ct5++;
            }
            
            if(!((((ct0>=3&&ct1>=1)&&(ct2>=2&&ct3>=1))&&ct5>=1))){
                ct++;
            }
        }
        if(((ct0>=3&&ct1>=1)&&(ct2>=2&&ct3>=1))&&ct5>=1){
                no=1;
            }
        if(no == 1){
            cout << ct+1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}