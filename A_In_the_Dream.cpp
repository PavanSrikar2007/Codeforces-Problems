#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int chk(int x,int y){
    int maxm = max(x,y);
    int minm = min(x,y);
    if((maxm+1)/2<=(minm+1)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int a,b,c,d;cin >> a >> b >> c >> d;
        int fh = chk(a,b);
        int sh = chk(c-a,d-b);
        int tot = 0;//chk(c,d);
        if(fh+sh+tot==2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}