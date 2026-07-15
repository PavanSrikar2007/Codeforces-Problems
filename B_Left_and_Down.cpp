#include <iostream>
using namespace std;

long long int GCD(long long int a, long long int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    long long int t;cin >> t;
    while(t--){
        long long int a,b,k;cin >> a >> b >> k;
        long long int cost = 0;
        if(a==b){
            cost = 1;
        }else{
            if(a<=k && b<=k){
                cost = 1;
            }else if(a/GCD(a,b)<=k && b/GCD(a,b)<=k){
                cost = 1;
            }else{
                cost = 2;
            }
        }
        cout << cost << endl;
    }
}