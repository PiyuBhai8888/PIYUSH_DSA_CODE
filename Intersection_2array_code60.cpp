#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void intersectionArray(int a1[],int n1,int a2[], int n2){

    cout<<"\nIntersection element are: "<<endl;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(a1[i]==a2[j]){
                cout<<a1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}

int main(){
    
    int n1 ;
    cout<<"\nenter size of 1 array" <<endl;
    cin>>n1;
    int a1[100];
    for(int i=0; i<n1; i++){
        cin>>a1[i];
    }

    int n2;
    cout<<"\nenter size of 2 array"<<endl;
    cin>>n2;
    int a2[100];
    for(int j=0; j<n2; j++){
        cin>>a2[j];
    }

    intersectionArray(a1, n1, a2, n2);
    return 0;

}