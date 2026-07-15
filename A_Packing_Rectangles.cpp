#include <iostream>
using namespace std;

long long w,h,n;

bool good(long long int m){
        return (m/w)*(m/h)>=n;
}

int main(){
    ios::sync_with_stdio(false);
    cin >> w >> h >> n;
    long long int l=0,r= 1;
    while(!good(r)){
        r*=2;
    }
    long long int mid;
    while(r>l+1){
        mid = (l+r)/2;
        if(good(mid)){
            r=mid;
        }else{
            l=mid;
        }
    }
    cout << r << endl;
    return 0;
}