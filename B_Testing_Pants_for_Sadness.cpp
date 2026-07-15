#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    long long int no_of_cliks=0;
    vector<long long int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(long long int i=0;i<n;i++){
        if(i>=1){
        no_of_cliks+=1+(i+1)*(a[i]-1);
        }else{
            no_of_cliks+=a[i];
        }
    }
    cout << no_of_cliks;
}