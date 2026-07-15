#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int x;cin >> x;
        vector<long long int> a1(32);
        vector<long long int> a2(32);
        vector<long long int> a3(32);
        a1[0]=1;
        a2[0]=1;
        a3[0]=3;
        for(int i=1;i<32;i++){
            a1[i]=2*min(a2[i-1],a3[i-1])+1;
            a2[i]=2*min(a1[i],a3[i-1])+1;
            a3[i]=2*min(a1[i],a2[i])+1;
        }
        if(x==1){
            cout << 3 << endl;
        }else{
        for(int i=1;i<32;i++){
            if(a1[i]>=x){
                if(a2[i-1]>=x&&a3[i-1]>=x){
                    cout << 3*i+1 << endl;
                    break;
                }else if(a2[i]>=x&&a3[i-1]>=x){
                    cout << 3*i+2 << endl;
                    break;
                }if((a1[i]>=x&&a2[i]>=x)&&a3[i]>=x){
                    cout << 3*i+3 << endl;
                    break;
            }

            }
            
            
        }
        }
    }
}