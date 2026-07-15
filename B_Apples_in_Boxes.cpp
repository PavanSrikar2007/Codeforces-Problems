#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        int k;cin >> k;
        string ans;
        vector<int> a(n);
        int max=-1,maxct=0,min=INT_MAX,sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i]){
                min=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==max){
                maxct++;
            }
        }

        if(sum%2!=0){
            ans="Tom";
        }else{
            ans="Jerry";
        }
        
        if(max-min>k+1||(max-min==k+1 && maxct>1)){
            ans="Jerry";
        }
        cout << ans << endl;
    }
}