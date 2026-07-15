#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;cin >> n;
    long long int k;cin >> k;
    long long int ans;
    if(k%2!=0){
        ans = 1;
    }else{

    long long int i=0;

    while(k%2==0&&k>1){
        k/=2;
        i++;
    }
    ans = i+1;

    }
    cout << ans;
}