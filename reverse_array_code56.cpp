#include <iostream>
using namespace std;
void reverseArray(int a[],int n){
    int start=0,end=n-1;
    while (start <= end)
    {
        swap(a[start] , a[end]);
        start++;
        end--;
    }
}
int main(){
    int a[]={9,6,2,4,32,54,7658,96,1,4};
    int n=10;
    cout<<"array\n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    reverseArray(a,n);
cout<<"\n Reverse Array \n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}