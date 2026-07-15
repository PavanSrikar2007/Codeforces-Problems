#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n,d;cin >> n >> d;
        int s_sum=0;
        string ans = "YES";
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>d){
                ans="NO";
            }
        }
        sort(a.begin(),a.end());
        s_sum = a[0]+a[1];
        if(s_sum<=d||ans=="YES"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}