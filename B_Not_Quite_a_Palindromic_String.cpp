#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        cin.ignore();
        string s;
        string ans;
        getline(cin,s);
        int ct0=0,ct1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ct0++;
            }else{
                ct1++;
            }
        }
        if(ct0<(n-2*k)/2 || ct1<(n-2*k)/2){
            ans = "NO";
        }else{
            int rem1 = ct1-(n-2*k)/2;
            int rem0 = ct0-(n-2*k)/2;
            if(rem1%2==0){
                ans = "YES";
            }else{
                ans = "NO";
            }

        }
        cout << ans << endl;
    }
}