#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Mark of stduent ";
    cin>>marks;

    if(marks>=90){
        cout<<"you have A+ grade ";
    }
    else if (marks>=80 && marks<90){
        cout<<"you have A grade ";
    }
    else if(marks>=65 && marks<80){
        cout<<"you have B grade ";
    }
    else if(marks>=50 && marks<65){
        cout<<"you have C grade ";
    }
    else if( marks>=35 && marks<50){
        cout<<"you have D grade ";
    }
    else{
        cout<<"You are False ";
    }

    return 0;
}