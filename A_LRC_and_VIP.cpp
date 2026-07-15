#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans="No";
        vector<int> a(n);
        int max=-1;
        int first;
        for(int i=0;i<n;i++){
            cin >> a[i];
            first=a[0];
            if(first!=a[i]){
                ans="Yes";
            }
            if(max<a[i]){
                max=a[i];
            }
        }

        cout << ans << endl;

        if(ans=="Yes"){
            for(int i=0;i<n;i++){
                if(a[i]==max){
                    cout << 1 << " ";
                }else {
                    cout << 2 << " ";
                }
         }
                         cout << endl;
        }

    }
}