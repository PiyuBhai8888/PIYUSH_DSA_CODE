#include <iostream>
using namespace std;

int main(){

    int n,i;
    cout<<"enter n number ";
    cin>>n;

    for(i=0; i<n; i++){
        cout<<i<<endl;
    }
    for(i=n-1; i>0; i--){
        cout<<"reverse is "<<i<<endl;
    }
    return 0;
}
