#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> g(n);
        for(int i=0;i<n;i++){
            cin >> g[i];
        } 
        sort(g.begin(),g.end(),greater<int>());
        long long int min_em = 0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                min_em+=g[i];
            }
        }
        cout << min_em << endl;
    }
}