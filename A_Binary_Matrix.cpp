#include  <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> arr[i][j] ;
            }
        }
        int a[n];
        int b[m];
        int r=0,c=0;
        for(int i=0;i<n;i++){
            a[i]=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]=='1'){
                    a[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                r++;
            }
        }
         for(int i=0;i<m;i++){
            b[i]=0;
            for(int j=0;j<n;j++){
                if(arr[j][i]=='1'){
                    b[i]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(b[i]%2!=0){
                c++;
            }
        }
        cout << max(r,c) << endl;
    }
}