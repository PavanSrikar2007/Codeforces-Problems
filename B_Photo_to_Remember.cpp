#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> w(n);
    vector<int> h(n);
    int sum=0;
    int max=0,idx=-1,max1=0;
    for(int i=0;i<n;i++){
        cin >> w[i] >> h[i];
        sum+=w[i];
        if(max<h[i]){
            max=h[i];
            idx=i;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=idx){
            if(max1<h[i]){
                max1=h[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        int h;
        if(i!=idx){
            h=max;
        }else{
            h=max1;
        }
        cout << (sum-w[i])*h << " ";
    }
    

}