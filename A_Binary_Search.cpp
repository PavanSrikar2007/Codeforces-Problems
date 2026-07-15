#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,key;
    bool found;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<k;i++){
        found =false;
    cin >> key;
    int l=0,h=n-1,mid;
    while(l<=h){
         mid = (l + (h-l)/2);
        if(a[mid]==key){
            found = true;
            break;
        }else if(a[mid]<key){
            l=mid +1;
        }else{
            h = mid -1;
        }
        }
        if(found ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}