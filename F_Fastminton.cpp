#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string events;cin >> events;
    int GL = 0,GR = 0;
    int PL = 0,PR = 0;
    string serve = "l";
    string winner="NONE";
    for(int i=0;i<events.length();i++){
        if(serve=="l"){
            if(events[i] == 'S'){
                PL+=1;
            }else if(events[i]=='R'){
                PR+=1;
                serve = "r";
            }
        }else{
            if(events[i] == 'S'){
                PR+=1;
            }else if(events[i]=='R'){
                PL+=1;
                serve = "l";
            }
        }
        
        if(PL>=5 && (PL-PR>=2)){
            PL=0;
            GL+=1;
            PR=0;
        }else if(PR>=5 && (PR-PL>=2)){
            PR=0;
            GR+=1;
            PL=0;
        }
        if(PL>=10){
            GL+=1;
            PR=PL=0;
        }else if(PR>=10){
            GR+=1;
            PL=PR=0;
        }

        if(GL>=2){
            winner = "L";
        }else if(GR>=2){
            winner = "R";
        }

        if(winner=="L" && events[i]=='Q'){
            cout << GL << " (winner)" <<  " - " << GR << endl;
            break;
        }else if(winner == "R" && events[i]=='Q'){
            cout << GL <<  " - " << GR << " (winner)" << endl;
            break;
        }

        if(events[i]=='Q' && serve == "l"){
            cout << GL << " (" << PL << "*)" << " - " << GR << " (" << PR << ") " << endl;
        }else if(events[i]=='Q' && serve == "r"){
             cout << GL << " (" << PL << ")" << " - " << GR << " (" << PR << "*) " << endl;
        }

    }

}