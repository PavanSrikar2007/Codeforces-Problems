#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,ans;
    cin >> t;
    while(t--){
    vector<int> a(5);
    cin >> a[0] >> a[1] >> a[3] >> a[4]; 
    int diff1 = a[0]+a[1];
    int diff2 = a[3]-a[1];
    int diff3 = a[4]-a[3];
    if(diff1==diff2 && diff2==diff3)
        ans = 3;
    else if(diff1==diff2 && diff2!=diff3)
        ans = 2;
    else if(diff1!=diff2 && diff2==diff3)
        ans = 2;
    else if(diff1==diff3 && diff2!=diff3)
        ans = 2;
    else
        ans = 1;
    cout << ans << endl;
    }
    return 0;
}