#include <iostream>
using namespace std;

int main(){
    int t,n,m,x,y,per;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> m;
        per = n*m*4;
        for(int i=0;i<n;i++){
            cin >> x;
            cin >> y;
            if(i>0){
            per -= 2*((m-x)+(m-y));
            } 
        }
        cout << per << endl;
    }

}