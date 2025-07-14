#include <iostream>
using namespace std;
int main (){
    int a, b, temp;
    cout <<"Enter two numbers For swapping: ";
    cin>> a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping two number is: ";
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    return  0;
}