#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int a,b,c;cin >> a >> b >> c;
        if(c%2==0){
            a+=c/2;
            b+=c/2;
        }else{
            a+=(c+1)/2;
            b+=(c-1)/2;
        }
        if(a>b){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
}