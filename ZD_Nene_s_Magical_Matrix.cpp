#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum=0;
        int op=0;
        for(int i=1;i<=n;i++){
            sum+=i*(2*i-1);
        }
        cout << sum << " " << 2*n << endl;
        for(int i=n;i>0;i--){
            cout << 1 << " " << i << " ";
            for(int i=1;i<=n;i++){
                cout << i << " ";
            }
            cout << endl;

            cout << 2 << " " << i << " ";
            for(int i=1;i<=n;i++){
                cout << i << " ";
            }
            cout << endl;

        }
    }
}