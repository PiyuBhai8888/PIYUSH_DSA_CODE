#include<iostream>
using namespace std;

int main(){
    int a[]={23,32,54,34,64,67,43};
    int *ptr= a;

    cout<<*(ptr + 1)<<endl;
    cout<<*(ptr + 3)<<endl;
    return 0;
}