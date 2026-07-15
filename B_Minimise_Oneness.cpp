 #include <bits/stdc++.h>
#include <climits>
 using namespace std;

 int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;      
        long long int min=INT_MAX;  
        long long int k;   
        int ct0=0;
        // for(int i=1;i<=n;i++){
        //     k=abs((pow(2,i)-1)*(2-pow(2,n-i)));
        //     if(min>k){                                   
        //         min=k;
        //         ct0=i;
        //     }
        // }
        ct0=n-1;
        if(n==1){
            ct0=1;
        }
        for(int i=0;i<n;i++){
            if(i<ct0){
                cout << 0;
            }else{
                cout << 1;
            }
        }
        cout << "\n";
    }
 }