#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> a;
        set<int> b;
        set<int> intersection;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(),
                     inserter(intersection, intersection.begin()));

        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.insert(x);
        }
        for(int i=0;i<n;i++){
            int y;
            cin >> y;
            b.insert(y);
        }
        if(a.size()>2 && b.size()>2){
            cout << "YES" << endl;
        }else if(a.size()==1&&b.size()==1 || a.size()==1&&b.size()==2 || a.size()==2&&b.size()==1){
            cout << "NO" << endl;
        }else if(a.size()==2&&b.size()==2&&intersection.size()==2){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }
}