#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of line";
    cin>>n;

    for(i=0; i<n; i++){
        char ch='A';
    for(j=0; j<i; j++){
        cout<<" ";
    }
    for(j=0; j<n-i; j++){
    cout<<ch+1;
    }
    cout<<endl;
}
return 0;


}