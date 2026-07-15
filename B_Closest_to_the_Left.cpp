#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    } 
    for(int i=0;i<k;i++){
    int l=-1,h=n,mid,key;
    cin >> key;
    while(l+1<h){
        mid = l + (h-l)/2; 
        if(a[mid] <= key){
            l=mid;
        }else{
        h = mid ;
        }
    }  
    cout << l+1 << endl;
    }
    return 0;
}