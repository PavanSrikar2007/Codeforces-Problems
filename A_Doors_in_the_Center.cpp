#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    if(n%2!=0){
        for(int i=0;i<n;i++){
            if(i==n/2){
                cout << '=';
            }else{
            cout << '-' ;
            }
        }
        cout << '\n' ;
    }
    else{
        for(int i=0;i<n;i++){
            if(i==n/2||i==n/2-1){
                cout << '=';
            }else{
                cout << '-';
            }
        }
        cout << '\n';
    }
}