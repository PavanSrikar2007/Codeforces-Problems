#include <iostream>
using namespace std;

long long int func(long long int n){
        return n - (n/2+n/3+n/5+n/7-n/14-n/10-n/6-n/15-n/21-n/35+n/30+n/105+n/70+n/42-n/210);
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        long long int l,r;cin >> l >> r;
        cout << func(r) - func(l-1) << endl;
    }
}