#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long int t;
    cin >> t;
    while(t--){
        string ans = "YES";
        long long int temp;
        long long int n;
        cin >> n;
        vector<long long int> a(n);                 //1 3 2
        for(long long int i=0;i<n;i++){
            cin >> a[i];
        }
        int k=n;
        while(k--){
        for(long long int i=1;i<n-1;i++){
            if(a[i]>a[i+1] && a[i]>a[i-1]){
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        }
        for(long long int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                ans = "NO";
            }
        }
        cout << ans << endl;
    }
}