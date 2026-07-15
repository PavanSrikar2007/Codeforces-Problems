#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vector<int> c(n+m);
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]>=b[j]){
            c[i+j]=b[j];
            j++;
        }else{
            c[i+j]=a[i];
            i++;
        }
    }
    while(i<n){
        c[i+j]=a[i];
        i++;
    }
    while(j<m){
        c[i+j]=b[j];
        j++;
    }
    for(int i=0;i<n+m;i++){
        cout << c[i] << " " ;
    }
}