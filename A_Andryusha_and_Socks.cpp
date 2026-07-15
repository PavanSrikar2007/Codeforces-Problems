#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(2*n);
    set<int> b;
    int ct=0,maxct=0;
    for(int i=0;i<2*n;i++){
        cin >> a[i];
    }
    for(int i=0;i<2*n;i++){
        auto it = b.find(a[i]);
        if(it!=b.end()){
            ct-=1;
        }else{
            b.insert(a[i]);
            ct++;
            if(ct>maxct){
                maxct=ct;
            }
        }
    }
    cout << maxct << endl;
}