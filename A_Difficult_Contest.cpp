#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<int> a(26,0);
        for(int i=0;i<s.size();i++){
            a[s[i]-65]++;
        }
        for(int i=25;i>=0;i--){
            for(int j=0;j<a[i];j++){
                cout << char(65+i) ;
            }
        }
        cout << endl ;
    }
}