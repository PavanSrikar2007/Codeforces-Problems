#include <iostream>
using namespace std;

int main(){
    int n,p,c;
    cin >> n;
    cin >> p;
    cin >> c;
    int arrp[p];
    int arrc[c];
    for(int i=0;i<p;i++){
        cin >> arrp[i];
    }
    for(int i=0;i<c;i++){
        cin >> arrc[i];
    }
    for(int i=0;i<n;i++){
        int output=2;
        for(int j=0;j<p;j++){
            if(arrp[j]==i+1){
                output = 1;
                break;
            }
        }
        cout << output<< " ";
    }

}