#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        char arr[10][10];
        int score=0;
        for(int y=0;y<10;y++){
            for(int x=0;x<10;x++){
                cin >> arr[y][x];

                if(((x==0||x==9)||(y==0||y==9))&&arr[y][x]=='X'){
                    score+=1;
                }else if(((x==1||x==8)||(y==1||y==8))&&arr[y][x]=='X'){
                    score+=2;
                }else if(((x==2||x==7)||(y==2||y==7))&&arr[y][x]=='X'){
                    score+=3;
                }else if(((x==3||x==6)||(y==3||y==6))&&arr[y][x]=='X'){
                    score+=4;
                }else if(((x==4||x==5)||(y==4||y==5))&&arr[y][x]=='X'){
                    score+=5;
                }
            }
        }
        cout << score << endl;
    }
}