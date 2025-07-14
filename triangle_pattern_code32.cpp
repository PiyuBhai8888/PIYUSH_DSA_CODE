#include <iostream>
using namespace std ;

int main(){
int n,i,j;

cout<<"enter number of lins ";
cin>>n;

for(i=0; i<n; i++){
    for(j=0; j<n-i-1;j++){
        cout<<" ";
    }
    for(j=1; j<i; j++){
        cout<<j;
    }
    for(j=i; j>0; j--){
        cout<<j;
    }
    cout<<endl;
}
return 0;
}