#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    vector<long long int> n(t);
    for(int i=0;i<t;i++){
        cin >> n[i];
    }
    vector<long long int> k(t);
    for(int j=0;j<t;j++){
        cin >> k[j];
    }
    for(int i=0;i<t;i++){
        if(n[i]==k[i]){
            cout << 1 << endl;                      // BINARY EXPONENTIATION
        }else{
            long long int ans=1;
            long long int p=1e9+7;
            long long int a=2;
            while(k[i]){
                if(k[i]%2!=0){
                    ans=((ans%p)*(a%p))%p;
                    k[i]--;
                }else{
                    a=((a%p)*(a%p))%p;
                    k[i]/=2;
                }
            }
            cout << ans%p << "\n";
        }
    }
}