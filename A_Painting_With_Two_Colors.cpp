#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,a,b;cin >> n >> a >> b;
        int maxa = n-a+1;
        int maxb = n-b+1;
        string ans="YES";

        

        if((n+max(a,b))%2!=0){
            ans = "NO";
        }
        if((n+b)%2!=0){
            ans = "NO";
        }
        cout << ans << endl;
    }
}