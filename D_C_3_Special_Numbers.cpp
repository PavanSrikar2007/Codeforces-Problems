#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long int n;
    cin >> n;
    int ans = -1;
    vector<long long int> stellarno;
    for(int i=1;i*i<=2*n+2;i++){
        long long int stellar = (i*(i+1))/2;
        stellarno.push_back(stellar);
    }

    for(int i=0;i<stellarno.size();i++){
        int key = n - stellarno[i];

        int lo = 0, hi = stellarno.size()-1;
        while(lo <= hi) {
        int mid = (lo+hi)/2;
        if(stellarno[mid] == key) {
            ans = mid;
            break;
        }
        else if(stellarno[mid] < key) {
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }    
    if(ans != -1){
        break;
    }
    }

    if(ans == -1){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }
}