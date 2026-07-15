#include <iostream>      // cin, cout
#include <vector>        // vector
#include <array>         // array
#include <string>        // string, stoi, to_string, etc.
#include <algorithm>     // sort, max, min, binary_search, lower_bound, etc.
#include <cmath>         // sqrt, floor, ceil, abs, pow, log, etc.
#include <climits>       // INT_MAX, INT_MIN
#include <cfloat>        // DBL_MAX, etc. (for floating-point limits)
#include <cstring>       // memset, memcpy
#include <map>           // map
#include <unordered_map> // unordered_map (faster than map for many problems)
#include <set>           // set
#include <unordered_set> // unordered_set
#include <queue>         // queue, priority_queue
#include <stack>         // stack
#include <deque>         // deque
#include <bitset>        // bitset (for bit manipulation)
#include <cassert>       // assert (debugging)
#include <numeric>       // accumulate, gcd, lcm (C++17)
#include <functional>    // function, greater, less, etc.
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string ans = "NO";
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n-1;i++){
            for(int j=i+2;j<n-1;j++){
                if(s[i]==s[j] && s[i+1]==s[j+1]){
                        ans = "YES";
                        break;
                }
            }
            if(ans=="YES"){
                break;
            }
        }
        cout << ans << endl;
    }
}