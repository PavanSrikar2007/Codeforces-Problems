#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int a,b,x,y;cin >> a >> b >> x >> y;
        int cost =-1;
        if(a==b){
            cost = 0;
        }else if(a%2==0 && a>b){
            cost = -1;
        }else if(a%2!=0 && a>b+1){
            cost = -1;
        }else if(a%2!=0 && a==b+1){
            cost = y;
        }else{
            if((a+b)%2==0){
                cost = (b-a)/2*min(x,y)+(b-a)/2*x;
            }else if(b%2==0){
                cost = (b-a)/2*min(x,y)+((b-a)/2+1)*x;
            }else{
                cost = ((b-a)/2+1)*min(x,y)+(b-a)/2*x;
            }
        }
        cout << cost << endl;
    }
}