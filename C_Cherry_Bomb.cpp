#include <iostream> 
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        int chk=1;
        int sum=0;
        int amax=0,amin=INT_MAX;
        int ans=1;
        int breq =0;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>amax){
                amax=a[i];
            }
            if(a[i]<amin){
                amin=a[i];
            }
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i]!=-1){
                sum=a[i]+b[i];
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                chk=0;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                if(a[i]+b[i]!=sum){
                    ans=0;
                    break;
                }
            }else{
                breq = sum-a[i];
                if(breq<0 || breq>k){
                    ans=0;
                    break;
                }
            }
        }
        if(chk==1){
            cout << amin+k-amax+1 <<endl;
        }else{
            cout << ans << endl;
        }

    }
}