#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin >> prices[i];
    }
    int no_of_days;
    cin >> no_of_days;
    vector<int> budget(no_of_days);
    for(int i=0;i<no_of_days;i++){
        cin >> budget[i];
    }
    sort(prices.begin(),prices.end());
    for(int i=0;i<no_of_days;i++){
        int no_of_shops=0;
        int key = budget[i];
        int l=-1,r=n,mid;
        while(r>l+1){
            mid=(l+r)/2;
            if(prices[mid]<=key){
                l=mid;
            }else{
                r=mid;
            }
            no_of_shops=l+1;
        }
        cout << no_of_shops << endl;
    }
    return 0;   
}