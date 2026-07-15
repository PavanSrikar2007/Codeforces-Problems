#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n),b(n);
        int agb=0,bga=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                agb+= a[i]-b[i] ;
            }else if(b[i]>a[i]){
                bga+= b[i]-a[i] ;
            }
        }

        int it1 = agb;
        int it2 = bga;

        cout << it1+1 << endl;

    }
}