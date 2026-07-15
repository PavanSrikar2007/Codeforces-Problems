#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "No";
        vector<int> a(n);
        set<int> b;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a[i]=x;
            b.insert(x);
        }
        if(b.size()<=1){
            ans = "Yes";
        }else if(b.size()>2){
            ans = "No";
        }else{
            int p=0,q=0;
            for(int i=0;i<n;i++){
                if(a[i]==*b.begin()){
                    p++;
                }else{
                    q++;
                }
            }
            if(n%2==0 && p==q){
                ans = "Yes";
            }
            if(n%2!=0 && abs(p-q)==1){
                ans = "Yes";
            }
        }
        cout << ans << endl;
    }
}