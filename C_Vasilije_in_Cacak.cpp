#include <iostream>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        long long int n;cin >> n;
        long long int k;cin >> k;
        long long int x;cin >> x;
        long long int minsum = k * (k + 1) / 2;
        long long int mxsum = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
        
        if (x >= minsum && x <= mxsum) cout << "YES\n";
        else cout << "NO\n";
    }
}