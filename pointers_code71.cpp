#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a=60;
    int * ptr =&a;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    
    cout<< &ptr<<endl;
    return 0;
}