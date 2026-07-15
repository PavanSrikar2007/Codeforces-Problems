#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        string ans;
        int n;cin >> n;
        int k;cin >> k;
        string s;
        cin >> s;
        vector<int> alph(26);
        for(int i=0;i<n;i++){
            alph[s[i]-97]++;
        }
        int odd=0,even=0;
        for(int i=0;i<26;i++){
            if(alph[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(odd>k+1){
            ans = "NO";
        }else{
            ans = "YES";
        }
        cout << ans << endl;
    }
}