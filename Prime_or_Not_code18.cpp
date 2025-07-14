#include <iostream>
using namespace std;

int main(){
    int i, n;
    cout <<"enter any number";
    cin>>n;

    if(n <=1){
        cout<<"false";
    }
    for( int i=2; i<n-1; i++){
        if(n%2==0){
            cout<<"this is not prime"<<endl;
            break;
        }
        else{
            cout<<"this is prime";
        }
    }
    return 0;
}