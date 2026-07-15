#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,a,b;
    while(t--){
        cin >> n;
        cin >> a;
        cin >> b;
        if((a-b)%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}