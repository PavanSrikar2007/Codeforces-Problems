#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin >> p[i];
        }
        int leftind = 0;
            int rightind = n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(p[rightind]>=p[leftind]){
                    cout << 'R';
                    rightind-=1;
                }else{
                    cout << 'L';
                    leftind+=1;
                }
            }else{
                if(p[rightind]<=p[leftind]){
                    cout << 'R';
                    rightind-=1;
                }else{
                    cout << 'L';
                    leftind+=1;
                }
            }
        }
        cout << endl;
    }
}