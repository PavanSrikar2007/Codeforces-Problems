#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int a,b,n;cin >> a >> b >> n;
        vector<int> x(n);
        long long int ct =b;
        for(int i=0;i<n;i++){
            cin >> x[i];
            ct+= min(a-1,x[i]);
        }
        cout << ct << endl;
    }
}