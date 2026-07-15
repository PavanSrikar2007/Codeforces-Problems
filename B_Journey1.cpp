#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int a,b,c;
        cin >> n;
        cin >> a;
        cin >> b;
        cin >> c;
        int d,r;
        d=n/(a+b+c);
        r=n%(a+b+c);
        if(r==0){
            cout << d*3 << endl;
        }else if(r<=a){
            cout << d*3+1 << endl;
        }else if(r<=a+b){
            cout << d*3+2 << endl;
        }else{
            cout << d*3+3 << endl;
        }
    }
    return 0;
}