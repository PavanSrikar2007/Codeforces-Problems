#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string result;
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(k>=2){
            result = "YES";
        }else{
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    result = "NO";
                    break;
                }else{
                    result = "YES";
                }
            }
        }
        if(n==1){
            result = "YES";
        }
        cout << result << endl;
    }
}