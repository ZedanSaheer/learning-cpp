#include<iostream>
using namespace std;

int main(){
    string prompt;
    int choice;
    bool op = true;
    while(op==1){
    cout<<"Do you want to see the menu? \n yes or no : ";
    cin>>prompt;
    if(prompt=="yes"){
        op=1;
    }else if(prompt=="no"){
        op=0;
        break;
    }
    cout<<"Enter a choice from 1,2,3 and 4 : ";
    cin>>choice;
           switch(choice){
        case 1:{
            cout<<"You have selected one \n";
            break;
        }
        case 2:{
            cout<<"You have selected two \n";
            break;
        }
        case 3:{
            cout<<"You have selected three \n";
            break;
        }
        case 4:{
            cout<<"You have selected four \n";
            break;
        }
        default:{
            cout<<"Please Select between 1,2,3,4 \n";
        }
     }
  }
};
