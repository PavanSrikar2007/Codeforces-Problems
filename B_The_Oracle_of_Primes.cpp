#include <bits/stdc++.h>
using namespace std;

vector<int> b(1e7,1);

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    b[0]=0;
    b[1]=0;
    for(int i=2;i*i<b.size();i++){
        if(b[i]==1){
            for(int j=i*i;j<b.size();j+=i){
                b[j]=0;
            }
        }
    }

    while(t--){
        int n;
        cin >> n;
        for(int i=n;i<1e7;i++){
            if(b[i]){
                cout << i << endl;
                break;
            }
        }
    }
}