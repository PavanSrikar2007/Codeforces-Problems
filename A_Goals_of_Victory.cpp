#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n-1);
        int sum=0;
        for(int i=0;i<n-1;i++){
            cin >> a[i];
            sum+=a[i];
        }
        cout << -1*sum << endl;
    }
}