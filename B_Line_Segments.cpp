#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        long long int n;cin >> n;
        long long int px,py,qx,qy;cin >> px >> py >> qx >> qy;
        vector<long double> a(n);
        long double sum=0,max=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
            if(max<a[i]){
                max=a[i];
            }
        }
        long long int sqdist = (qx-px)*(qx-px)+(qy-py)*(qy-py);
        if(max*max<sqdist){
            max = sqrt(sqdist);
        }
        sum += sqrt(sqdist);
        sum -= max;
        if(max>sum){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }   
}