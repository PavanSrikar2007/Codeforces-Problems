#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "NO";
        
        if(n%4==0){
            ans = "YES";
        }

        cout << ans << endl;
        if(ans == "YES"){
            for(int i=2;i<=n;i++){
                if(i%2==0){
                    cout << i << " ";
                }
            }
            int sum = 0;
            for(int i=1;i<n-2;i++){
                if(i%2!=0){
                    cout << i << " ";
                    sum+=i;
                }
            }
            cout << n/2*(n/2+1) - sum << " ";
            cout << endl;
        }

    }
}