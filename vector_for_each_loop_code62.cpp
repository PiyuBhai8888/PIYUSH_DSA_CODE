#include <iostream>
#include <vector>
using namespace std ;
int main(){
    vector<int> vec(5,0);
    vector<char> vec={'a','b','c','d'};

    for(char i: vec){    //for each loop
        cout <<i<<endl;
    }
    for(int i: vec){
        cout <<i<<endl;
    }
    return 0;
}
