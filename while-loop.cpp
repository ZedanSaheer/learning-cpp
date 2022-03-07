#include<iostream>
using namespace std ;

int main(){
    bool toggle=true;
    int num;
    while(toggle==1){
        cout<<"I will repeat till you tell me what is the answer of 2 times 2 : ";
        cin>>num;
        if(num == 4){
            cout<<"You have selected the right answer! Congratulations. \n";
            toggle=false;
        }else{
            cout<<"Please try again! \n";
        }
    }
    return 0;
}
