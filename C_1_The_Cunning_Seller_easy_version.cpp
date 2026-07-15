#include <iostream>
#include <vector>
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
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int nthct=0,nthpow=1;
        long long int n;cin >> n;
        vector<long long int> pow3;
        long long int i=0;
        while(1){
            if(nthpow>n){
                break;
            }else{
                nthpow*=3;
                nthct+=1;
            }
        }
        while(1){
            if(( power(3,i+1)+i*power(3,i-1) )/3<=power(3,nthct)+i*power(3,nthct-2)/3-4){
                pow3.push_back((power(3,i+1)+i*power(3,i-1))/3);
            }else{
                break;
            }
            i++;
        }
        long long int cost =0;

        for(int i=pow3.size()-1;i>=0;i--){
             long long int w_remove = (n/power(3,i-1))*power(3,i-1);
             long long int cost_add = pow3[i]*(w_remove/power(3,i-1));
             n-=w_remove;
             cost+=cost_add;
        }
        cout << cost << endl;

    }
}