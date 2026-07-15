#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;cin >> n;
    string ans = "Y";
    vector<vector<int> > v(10, vector<int>(10, 0));
    while(n--){
        int d,l,r,c;cin >> d >> l >> r >> c;
        r-=1,c-=1;
        if(r>9||c>9){
            ans = "N";
            break;
        }
        if(d==0){
            for(int j=c;j<c+l;j++){
                if(j>9){
                    ans = "N";
                    break;
                }
                if(v[r][j]==1){
                    ans = "N";
                    break;
                }else{
                    v[r][j]=1;
                }
            }
        }else{
            for(int i=r;i<r+l;i++){
                if(i>9){
                    ans = "N";
                    break;
                }
                if(v[i][c]==1){
                    ans = "N";
                    break;
                }else{
                    v[i][c]=1;
                }
            }
        }
        if(ans == "N"){
            break;
        }
    }
    cout << ans << endl;
}