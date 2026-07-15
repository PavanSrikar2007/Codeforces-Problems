#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> r(n);
        vector<int> copy(n);
        vector<int> sample(n);
        for(int i=0;i<n;i++){
            cin >> r[i];
            copy[i]=r[i];
        }
        string ans = "YES";
        if(n%2!=0){
            ans = "NO";
        }
        sort(copy.begin(),copy.end());
        int j=0,k=n/2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sample[i]=copy[j];
                j++;
            }else{
                sample[i]=copy[k];
                k++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(i%2!=0){
                if(sample[n-1]<=sample[0]){
                    ans="NO";
                    break;
                }
                if(sample[i]<=sample[i+1]||sample[i]<=sample[i-1]){
                    ans="NO";
                    break;
                }
            }
        }
    
        cout << ans << endl;
        if(ans == "YES"){
            for(int i=0;i<n;i++){
                cout << sample[i] << " " ;
            }
            cout << endl;
        }
    }
}