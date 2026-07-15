#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string ans = "YES";
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }      
        if(n%2!=0){
            for(int i=0;i<n/2;i++){
                if(a[i]<=2*(n-1-i)){
                    ans="NO";
                    break;
                }
                if(a[n-1-i]<=2*(n-1-i)){
                    ans="NO";
                    break;
                }
                
            }
            if(a[n/2]<n){
                    ans= "NO";
                }
        }else{
            for(int i=0;i<n/2-1;i++){
                if(a[i]<=2*(n-1-i)){
                    ans="NO";
                    break;
                }
                if(a[n-1-i]<=2*(n-1-i)){
                    ans="NO";
                    break;
                }
                
            }
            if(a[n/2]<=n||a[n/2-1]<=n){
                    ans= "NO";
                }
        }
        
        cout << ans << endl;
    }
}