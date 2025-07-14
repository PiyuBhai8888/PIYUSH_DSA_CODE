#include <iostream>
using namespace std;

void changeArr(int a[], int n){
    // cout<<"in function \n";
    for(int i=0; i<n; i++){
        a[i] = 2*a[i];
    }
}

int main(){
    int a[]={72,25,4};
    cout<<"in function\n"<<a[0]<<" "<<a[1]<<" "<<a[2]<<" ";

    changeArr(a,3);
    cout<< "\nin main\n ";
    for(int i=0; i<3; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}