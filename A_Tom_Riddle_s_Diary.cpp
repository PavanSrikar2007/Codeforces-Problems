#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    set<string> a;
    for(int i=0;i<n;i++){
        string b;
        cin >> b;
        if(a.find(b)!=a.end()){
            cout << "YES\n";
        }else{
            a.insert(b);
            cout << "NO\n";
        }
    }
}