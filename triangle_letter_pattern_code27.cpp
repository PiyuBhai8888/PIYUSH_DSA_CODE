#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"enter number ";
    cin>>n;
    char ch='A';
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<(ch+1)<<" ";
            ch++;
        }
        cout <<endl;
    }
    return 0 ;
}