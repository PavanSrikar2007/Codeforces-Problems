#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
#define int long long int

    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> min1;
        vector<int> min2;
        for(int i=0;i<n;i++){
            int m;cin >> m;
            vector<int> a(m);
            for(int j=0;j<m;j++){
                cin >> a[j];
            }
            sort(a.begin(),a.end());
            min1.push_back(a[0]);
            min2.push_back(a[1]);
            
        }

        int min_1=1e9;
        int min_2= 1e9;
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=min1[i];
            sum2+=min2[i];

            if(min_1>min1[i]){
                min_1=min1[i];
            }

            if(min_2>min2[i]){
                min_2=min2[i];
            }
        }

        cout << sum2+min_1-min_2 << endl;
        
    }
}