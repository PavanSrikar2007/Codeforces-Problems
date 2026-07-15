#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        int ct=1;
        for(int i=1;i<n;i++){
            if(b[i-1]<=b[i]){
                ct++;
            }else{
                ct+=2;
            }
        }
        cout << ct << endl;

        cout << b[0] << " " ;
        for(int i=1;i<n;i++){
            if(b[i-1]<=b[i]){
                cout << b[i] << " ";
            }else{
                cout << b[i] << " " << b[i] << " ";
            }
        }
        cout << endl;
    }
}