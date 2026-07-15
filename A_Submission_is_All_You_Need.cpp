#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int sum=0;
        int n;cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        vector<int> ct(51,0);
        for(int i=0;i<n;i++){
            ct[a[i]]++;
        }
        cout << sum + ct[0] << endl;
    }
}