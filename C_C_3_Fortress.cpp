#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    long long int max = 0;
    vector<long long int> x(n);
    vector<long long int> y(n);
    vector<long long int> sum(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
        cin >> y[i];
         sum[i]=x[i]+y[i];
        if(max<sum[i]){
            max = sum[i];
        }
    }
    cout << max << endl;
}