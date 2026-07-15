#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a;
        cin >> a;        
        long long int b;
        cin >> b;         
        long long int ans = 0;            
        if(a>=b){
            ans = a*n;
        }else{
            int k = min(n,b);
            k = ((b+1-a)<=(k))&&(b+1-a>=0)?(b+1-a):(k);
            if(k%2==1){
                ans = k*(b-(k-1)/2);
            }else{
                ans = (k/2)*(2*b-(k-1));
            }
            ans += (n-k)*a;
        }
        cout << ans << "\n";
    }
}