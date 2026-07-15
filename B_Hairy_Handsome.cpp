#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=1;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
            for(int i=n-1;i>=0;i--){
                cout << b[i] << " ";
            }
        cout << endl;
    }
}