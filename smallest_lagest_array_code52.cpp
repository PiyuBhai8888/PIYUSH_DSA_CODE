#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=10;
    cout<<"enter length of array ";
    cin>>n;
    
    int a[100];
    int smallest= INT_MAX;
    int largest= INT_MIN;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        if(a[i] < smallest){
            smallest =a[i];
        }
        if(a[i] > largest){
            largest =a[i];
        }
    }
    cout<<"smallest= "<<smallest<<endl;
    cout<<"largest= "<<largest<<endl;
    return 0;
}