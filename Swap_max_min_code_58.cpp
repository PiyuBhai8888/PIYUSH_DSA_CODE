#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapMaxMin(int a[],int n){
    int maxIndex=0, minIndex =0;

    for(int i=0; i<n; i++){
        if(a[i] > a[maxIndex]){
            maxIndex= i;
        }
        if(a[i] < a[minIndex]){
            minIndex= i;
        }
    }
//swapping array

int temp = a[maxIndex];
a[maxIndex] = a[minIndex];
a[minIndex] = temp;

cout<<"Swap the max & min number of an array "<<endl;
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[100];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    swapMaxMin(a , n);

    return 0;

}