#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void uniqueValue(int a[], int n){
    cout<<"\n Unique element value are: "<<endl;
    for(int i=0; i<n; i++){
        bool isUnique= true;
        for(int j=0; j<n; j++){
            if(i != j && a[i] == a[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
        cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    uniqueValue( a , n);
    return 0;
}