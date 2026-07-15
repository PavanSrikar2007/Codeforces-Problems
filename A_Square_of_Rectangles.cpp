#include <iostream>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int l1,b1,l2,b2,l3,b3;
        cin >> l1>>b1>>l2>>b2>>l3>>b3;
        int ans=0;
        if(((l1==l2+l3) && (l1==b1+b2)) && b2==b3){
            ans =1;
        }else if(((l1==l2)&&(l1==l3))&&(l1==b1+b2+b3)){
            ans = 1;
        }else if(((l2==l3)&&(b1==b2+b3))&&(l1+l2==b1)){
            ans = 1;
        }else if((l1+l2+l3==b1 && (b1==b2))&&b2==b3){
            ans = 1;
        }
        if(ans==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}