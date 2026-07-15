#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;cin >> n;
    int m;cin >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    int max = -1;
    for(int i=0;i<n;i++){
        // for(int j=0;j<m;j++){
        //     if(min>abs(a[i]-b[j])){
        //         min = abs(a[i]-b[j]);
        //     }
        // }
        int temp = INT_MAX;
        int l = upper_bound(b.begin(),b.end(),a[i]) - b.begin();
        if(l!=m){
            temp = min(temp,abs(b[l]-a[i]));
        }
        l--;
        if(l>=0){
            temp = min(temp,abs(b[l]-a[i]));
        }
        if(max<temp){
            max = temp;
        }
    }
    cout << max;
}