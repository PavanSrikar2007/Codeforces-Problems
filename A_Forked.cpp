#include <iostream>
#include <set> 
#include <utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    int dx[4] = {1,-1,-1,1},dy[4]={1,1,-1,-1};
    while(t--){
        int a;cin >> a;
        int b;cin >> b;
        int xk;cin >> xk;
        int yk;cin >> yk;
        int xq;cin >> xq;
        int yq;cin >> yq;

        set<pair<int,int>> king_hits,queen_hits;

        for(int j=0;j<4;j++){
            king_hits.insert({xk+dx[j]*a,yk+dy[j]*b});
            king_hits.insert({xk+dx[j]*b,yk+dy[j]*a});

            queen_hits.insert({xq+dx[j]*a,yq+dy[j]*b});
            queen_hits.insert({xq+dx[j]*b,yq+dy[j]*a});
        }
        
        int ct=0;
        for(auto it = king_hits.begin();it!=king_hits.end();it++){
            if(queen_hits.find(*it)!=queen_hits.end()){
                ct++;
            }
        }
        cout << ct << endl;
    }

}