#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int n,k;
vector<int> length;

bool good(double x){
    int count=0;
    for(int i=0;i<n;i++){
        count+=length[i]/x;
    }
    return count>=k;
}

int main(){
    cin >> n >> k;
    length.resize(n);
    for(int i=0;i<n;i++){
        cin >> length[i];
    }

    double l=0,r=1e8;
    for(int i=0;i<80;i++){
        double m=(l+r)/2;
        if(good(m)){
            l=m;
        }else{
            r=m;
        }
    }
    cout << setprecision(20) << l << endl;
    return 0;
}