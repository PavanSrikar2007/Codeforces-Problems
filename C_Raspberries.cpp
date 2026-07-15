#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int max_rem=-1;
        int min_rem=10;
        if(k!=4){
        for(int i=0;i<n;i++){
            int rem = a[i]%k;
            if(rem>max_rem){
                max_rem=rem;
            }
            if(rem<min_rem){
                min_rem=rem;
            }
        }
        if(min_rem==0){
            cout << 0 << endl;
        }else{
            cout << min(k-min_rem,k-max_rem) << endl;
        }
        }else{
            int even=0,ck=0;
            for(int i=0;i<n;i++){
                if((a[i]+1)%4==0){
                    ck=1;
                }
            if(a[i]%2==0){
                even++;
                if(a[i]/2 %2==0){
                    even++;
                }
            }
            if(even>2){
                break;
            }
        }
        if(even>=2){
            cout << 0 << endl;
        }else if(ck==1){
            cout << 1 << endl;
        }else{
            cout << 2-even << endl;
        }
        }
    }
}