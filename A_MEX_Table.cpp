#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int largest_dimen = n>m?n:m;
        cout << largest_dimen+1 << endl;
    }
    return 0;
}