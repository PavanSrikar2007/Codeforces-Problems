#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int power(long long int base,long long int exp){
    long long int result=1;
    while(exp>=0){
        result*=base;
        exp-=1;
    }
    return result;
}

int main(){
    int t;cin >> t;
    while(t--){
        vector<long long int> a;
        int ct=0;
        long long int n;cin >> n;
        long long int i=0;
        while(1){
            if(n%((1+power(10,i)))==0){
                a.push_back(n/(1+power(10,i)));
                ct++;
            }
            if((1+power(10,i))>n){
                break;
            }
            i++;
        }
        sort(a.begin(),a.end());
        cout << ct << endl;
        for(int i=0;i<ct;i++){
            cout << a[i] << ' ';
        }
        if(ct!=0){
        cout << endl;
        }
    }
}