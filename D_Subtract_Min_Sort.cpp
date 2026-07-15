#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,r=1;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                a[i+1]-=a[i];
                a[i]=0;
            }
            else{
                a[i]-=a[i+1];
                a[i+1]=0;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                r = 0;
                break;
            }
    }
    if(r==0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
}