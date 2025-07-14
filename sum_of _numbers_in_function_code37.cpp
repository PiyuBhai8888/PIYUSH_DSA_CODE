#include <iostream>
using namespace std;
void sumN(int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum + i;
    }
    return sum;
}

int main(){

    cout << sumN(32)<<endl;
    return 0;
}