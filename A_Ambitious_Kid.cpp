#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;cin >> n;
    int minm=1e6;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==0){
            cout << 0 << endl;
            return 0;
        }else if(minm>abs(a[i])){
            minm= abs(a[i]);
        }
    }
    cout << abs(minm) << endl;
}