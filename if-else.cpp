#include<iostream>
using namespace std;

int main(){
    int savings;
    cout<<"Enter a number : ";
    cin>>savings;
    if(savings>=5000){
        cout<<"\n Great Income";
    }else{
        cout<<"\n Bad Income";
    }
    return 0;
}
