#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int max_sum=0;
        for(int i=1;i<=n;i++){
            max_sum+=abs(n+1-i - i);
        }
        cout << max_sum/2+1 << endl;
    }
}