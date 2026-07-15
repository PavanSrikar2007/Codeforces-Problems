#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,k;
    cin >> t;
    while(t--){
        int score = 0;
        cin >> n >> k;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin >> x[i];
            if(x[i]>=k){
                x[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(x[i]+x[j]==k){
                    score+=1;
                    x[i]=0;
                    x[j]=0;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}