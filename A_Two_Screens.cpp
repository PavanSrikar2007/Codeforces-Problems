#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    while(q--){
        string t;
        string s;
        int time =0;
        cin >> s;
        cin >> t;
        int i=0,j=0;
        while(i<t.length()&&j<s.length()){
            if(t[i]==s[j]){
                time++;
                i++;
                j++;
            }else{
                break;
            }
        }
        if(t[0]==s[0]){
            time++;
        }
        while(i<t.length()){
            time++;
            i++;
        }
        while(j<s.length()){
            time++;
            j++;
        }
        cout << time << endl;
    }
}