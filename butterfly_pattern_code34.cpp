#include<iostream>
using namespace std;
    int main(){
int n=5;
 // Print the upper part of the pattern
for (int i=0; i<n; i++){
    for(int j=0; j<i; j++){
        cout<<"*";
    }
    // Print spaces
    for (int j=0; j<2*(n-i); j++){
        cout<<" ";
    }
    // Print stars
    for (int j=0; j<i; j++){
        cout<<"*";
    }
    cout<<endl;
}
for (int i=n; i>=0; i--){
    for(int j=0; j<i; j++){
        cout<<"*";
    }
    // Print spaces
    for (int j=0; j<2*(n-i); j++){
        cout<<" ";
    }
    // Print stars
    for (int j=0; j<i; j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}