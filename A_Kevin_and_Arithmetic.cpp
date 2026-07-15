#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    int t;
    cin >> t;
    int n,even,odd;
    while(t--){
        even = 0;
        odd = 0;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
           if(a[i]%2==0){
                even+=1;
            }else{
                odd+=1 ;
            }
        }
        if(even >= 1){
            cout << odd+1 << endl;
        }else{
            cout << odd-1 << endl;
        }
    }
    return 0;
}