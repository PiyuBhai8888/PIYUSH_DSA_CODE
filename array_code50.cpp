#include <iostream>
using namespace std;

int main(){
    int marks[100]= {99,100,45,76,65};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    
    //0 to size-1
    cout<< marks[5]<<endl;
    cout<< marks[-1]<<endl;
    //they provide error
    
    return 0;
}