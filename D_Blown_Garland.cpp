#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int r,g,b,y;
    int ctr=0,ctg=0,ctb=0,cty=0;
    int i;
    for(i=0;i<(s.length()-s.length()%4);i++){
        if(s[i]=='G'){
            g=i;
            ctg++;
        }else if(s[i]=='B'){
            b=i;
            ctb++;
        }else if(s[i]=='Y'){
            y=i;
            cty++;
        }else if(s[i]=='R'){
            r=i;
            ctr++;
        }
    }

    ctr=s.length()/4-ctr;
    ctg=s.length()/4-ctg;
    ctb=s.length()/4-ctb;
    cty=s.length()/4-cty;

    for(int k=i;k<s.length();k++){
        if(s[k]=='!'){
        if(k%4==r%4){
            ctr++;
        }else if(k%4==g%4){
            ctg++;
        }else if(k%4==b%4){
            ctb++;
        }else if(k%4==y%4){
            cty++;
        }

        }
    }
    
    cout << ctr << " " << ctb << " "  << cty << " "  << ctg ;
}