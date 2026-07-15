#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,s;cin >> n >> s;
        int sum=0;
        vector<int> a(n);
        int ct0=0,ct1=0,ct2=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
            if(a[i]==0){
                ct0++;
            }else if(a[i]==1){
                ct1++;
            }else{
                ct2++;
            }
        }
        
        if(sum>s){
            for(int i=0;i<n;i++){
            cout << a[i] << ' ';
            }
        cout << endl;
        }else if(sum==s){
            cout << -1 << endl;
        }else{
            if (s-sum==1){
                for (int i = 0; i < ct0; ++i) {
                cout << 0 << " ";
            }
                for (int i = 0; i < ct2; ++i) {
                cout << 2 << " ";
            }
                for (int i = 0; i < ct1; ++i) {
                cout << 1 << " ";
            }
            cout << endl;
            }else{
                cout << -1 << endl;
            }
        }

    }
}