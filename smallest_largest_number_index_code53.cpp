#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter length of array ";
    cin>>n;

    int a[100];
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int smallest_index=0;
    int largest_index=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]< smallest){
            smallest = a[i];
            smallest_index = i;
        }
        if(a[i]> largest){
            largest = a[i];
            largest_index = i;
        }
    }
    
    cout << "largest= "<<largest<<endl;
    cout << "largest_index= "<<largest_index<<endl;
    cout << "smallest= "<<smallest<<endl;
    cout << "smallest_index= "<<smallest_index<<endl;
    return 0;
}