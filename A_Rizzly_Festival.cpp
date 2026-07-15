#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int ans=0;
    vector<int> a(n);
    int max = -1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        ans+=(max-a[i]);
    }
    cout << ans;
    return 0;
}