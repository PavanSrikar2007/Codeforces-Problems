#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first > p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%k!=0){
                a[i] = a[i]%k;
            }else{
                a[i]=k;
            }
        }
        vector<pair<int,int>> b(n);
        for(int i=0;i<n;i++){
            b[i].first = a[i];
            b[i].second = i;
        }
        sort(b.begin(),b.end(),compare);
        for(int i=0;i<n;i++){
            cout << b[i].second+1 << " ";
        }
        cout << endl;

    }
}