/* 
123
123
123
*/
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter any number \n";
    cin>>n;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}