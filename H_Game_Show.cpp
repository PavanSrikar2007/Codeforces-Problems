#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int c;cin >> c;
    vector<int> sn(c);
    for(int i=0;i<c;i++){
        cin >> sn[i];
    }
    vector<int> psum(c);
    psum[0] = sn[0];
    int maxm= max(0,psum[0]);
    for(int i=1;i<c;i++){
        psum[i] = psum[i-1]+sn[i];
        if(psum[i]>maxm){
            maxm =psum[i];
        }
    }
    cout << maxm + 100 << endl;
    
}