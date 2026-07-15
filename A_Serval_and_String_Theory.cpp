#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        string s1=s;
        reverse(s1.begin(),s1.end());
        set<char> a;
        for(int i=0;i<n;i++){
            a.insert(s[i]);
        }
        if(a.size()<=1){
            cout << "NO" << endl;
        }else if((s1==s&&k<=0)||(s1<s&&k<=0)){
            cout << "NO" << endl;
        }else{
            cout << "YES"  << endl;
        }
}
}