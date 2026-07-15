#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int a,b,c,d;cin >> a >> b >> c >> d;
        if(b<=c || d<=c){
            if(a>=min(b,d)){
                cout << "Gellyfish" << endl;
            }else{
                cout << "Flower" << endl;
            }
        }else{
            cout << "Flower" << endl;
        }
    }
}