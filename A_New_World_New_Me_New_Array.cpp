#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int rem1;
        int q1;
        int ans1;
        int n,k,p;
        cin >> n >> k >> p;
        if(k>=0 && n*p < k){
            cout << -1 << endl;
        }else if(k<0 && (n*p < -1*k)){
            cout << -1 << endl;
        }else{

                if(k>0){
                    rem1 = k%p;
                    q1 = k/p;
                    if(rem1>0){
                        ans1 = q1+1;
                        cout << ans1  << endl ;
                    }else{
                        ans1 = q1;
                        cout << ans1  << endl ;
                    } 
                }else{
                    k = -1*k;
                    rem1 = k%p;
                    q1 = k/p;
                    if(rem1>0){
                        ans1 = q1+1;
                        cout << ans1  << endl ;
                    }else{
                        ans1 = q1;
                        cout << ans1  << endl ;
                    } 
                }


        }

    }
}