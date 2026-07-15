#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int n;
    long long int count;
    int f;
    while(t--){
        f=0;
        string result = "YES";
        cin >> n;
        vector<long long int> a(n);
        vector<long long int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i]>a[i]){
                f++;
            }
        }
        if(f>=2){
            result = "NO";
        }
        if(f==0){
            result = "YES";
        }
        if(f==1){
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                continue;
            }
            if(b[i]>a[i]){
                count = b[i]-a[i];
                for(int j=0;j<n;j++){
                    a[j]=a[j]-count;
                }
            a[i]=a[i]+2*count;
            }
            if(b[i]>a[i]){
                break;
            }
        }
        }
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                result = "NO";
                break;
            }
        }
        cout << result << endl;
    }
}