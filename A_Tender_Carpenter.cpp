#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string result = "NO";
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n-1;i++){
            if(2*min(a[i],a[i+1])>max(a[i],a[i+1])){
                result = "YES";
            }
        }
        cout << result << endl;
    }
    return 0;
}