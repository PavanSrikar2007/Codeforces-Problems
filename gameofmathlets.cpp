#include <iostream>
#include <vector>
#include <algorithm>
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
        sort(x.begin(),x.end());
        int l=0,h=n-1;
        while(l<h){
            int sum = x[l]+x[h];
            if(sum==k){
                score+=1;
                l+=1;
                h-=1;
            }
            else if(sum<k){
                l+=1;
            }
            else{
                h-=1;
            }
        }
        cout << score << endl;
    }
    return 0;
}