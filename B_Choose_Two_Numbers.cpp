#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    set<int> a;
    set<int> b;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        a.insert(x);
    }
    cin >> m;
    int y;
    for(int i=0;i<m;i++){
        cin >> y;
        b.insert(y);
    }
    cout << *--a.end() << " ";
    cout << *--b.end() ;

}