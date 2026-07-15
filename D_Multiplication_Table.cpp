#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int x;
    cin >> x;
    int c =0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
        int j = x/i;
        if(i!=j && (i<=n && j<=n)){
            c += 2;
        }else if(i<=n&&j<=n){
            c = c +  1;
        }
        }
    }
    
    cout << c << "\n";
}