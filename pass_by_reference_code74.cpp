// pass by reference using pointer
#include <iostream>
using namespace std;

void changeA(int *prt){
    *prt =20;
}

int main(){
    int a=10;

    changeA(&a);

    cout<<"inside main fnx: "<<a<<endl;
    return 0;
}