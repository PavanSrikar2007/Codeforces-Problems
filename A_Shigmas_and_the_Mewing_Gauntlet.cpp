#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        int x;cin >> x;
        int y;cin >> y;
        int ans;
        if(x==0&&y==0 || x>0&&y>0){
            cout << -1 << endl;
        }else{
            x = max(x,y);
            if((n-1)%x!=0){
                cout<< -1 << endl;
                continue;
            }
            int count = (n-1)/x;
            int temp = 2;
            for(int i=0;i<count;i++){
                for(int j=0;j<x;j++){
                    cout << temp << " ";
                }
                temp += x;
            }
            cout << endl;
        }
    }
}