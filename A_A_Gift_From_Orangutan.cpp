#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int max=0,min=1001;
        int score=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i]){
                min=a[i];
            }
        }
        cout << (n-1)*(max-min) << endl;
    }
}