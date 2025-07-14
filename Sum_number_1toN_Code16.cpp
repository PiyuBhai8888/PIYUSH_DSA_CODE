#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    cout<<"Enter a number: \n";
    cin>>n;
    for(i=0; i<n; i++){
        sum=sum+i;
        cout<<"Sum of Number: "<<sum<<endl;
    }
    return 0;

}