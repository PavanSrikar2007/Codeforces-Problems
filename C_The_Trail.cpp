#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long int x,y,z;
        int n,m;
        int r=0,c=0;
        cin >> n >> m;
        string s;
        cin.ignore();
        getline(cin,s);
        long long int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        for(int k=0;k<n+m-1;k++){
            if(s[k]=='D'){
                x = 0;
                for(int i=0;i<m;i++){
                    x+=arr[r][i];
                }
                arr[r][c]= 0 - x;
                r+=1;
            }
            else if(s[k]=='R'){
                y=0;
                for(int j=0;j<n;j++){
                    y += arr[j][c];
                }
                arr[r][c]=0-y;
                c+=1;
            }
        }
        z = 0;
        for(int i=0;i<n;i++){
            z+=arr[i][c];
        }
        arr[r][c]=0-z;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}