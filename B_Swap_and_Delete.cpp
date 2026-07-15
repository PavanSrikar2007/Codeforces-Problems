#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int ct0 = 0,ct1 = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                ct0++;
            }else{
                ct1++;
            }
        }
        int x=ct1,y=ct0;
        if(ct0==ct1){
                cout << 0 << endl;
                continue;
            }
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                x--;
                if(x<0){
                    cout << s.length()-i << endl;
                    break;
                }
            }else{
                y--;
                if(y<0){
                    cout << s.length()-i << endl;
                    break;
                }
            }
        }
    }
}