#include <iostream>
using namespace std;

int main(){
    int t,n,diff;
    cin >> t;
    int arra[105];
    int arrb[105];
    while(t--){
        diff = 0;
        cin >>n;
        for(int i=0;i<n;i++){
            cin >> arra[i];
        }
        for(int i=0;i<n;i++){
            cin >> arrb[i];
        }
        for(int i=0;i<n-1;i++){
            if(arra[i]>arrb[i+1]){
                diff=diff + arra[i] - arrb[i+1];
            }
        }
        diff+=arra[n-1];
        cout << diff << endl;
    }
}