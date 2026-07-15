#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
            int n,k;cin >> n >> k;
            string s;cin >> s;
            string ans = "YES";
            vector<int> ints(n,0);
            vector<int> psum(n+k,0);
            vector<int> op(n);
            ints[0] = s[0] - 48;
            psum[0] = ints[0];
            for(int i=1;i<n;i++){
                ints[i] = s[i]-48;
                psum[i] = psum[i-1]+ints[i];
            }
            // for(int j=0;j<=n;j++){
            //     if(psum[j+k-1]-psum[j-1] == k){
            //         ans = "NO";
            //         break;
            //     }
            // }
            for(int j=0; j+k-1 < n; j++){
            int ones = psum[j+k-1] - (j > 0 ? psum[j-1] : 0);
            if(ones == k){
                    ans = "NO";
                    break;
                }
            }

            if(ans=="NO"){
                cout << ans << endl;
            }else{
                cout << ans << endl;
                int num=1;
                for(int i=0;i<n;i++){
                    if(ints[i]==1){
                        op[i] = num;
                        num++;
                    }
                }
                for(int i=0;i<n;i++){
                     if(ints[i]==0){
                        op[i] = num;
                        num++;
                    }   
                }
                for(int i=0;i<n;i++){
                     cout << op[i] << ' ';  
                }
                    cout << endl; 
        }    
     }
}