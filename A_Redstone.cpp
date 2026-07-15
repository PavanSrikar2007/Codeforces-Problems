#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string ans = "NO";
        vector<int> a(n);
        vector<int> ct(107,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
            ct[a[i]]++;
        }
        for(int i=0;i<106;i++){
            if(ct[i]>=2){
                ans= "YES";
                break;
            }
        }    
        cout << ans << endl;    
    }
}