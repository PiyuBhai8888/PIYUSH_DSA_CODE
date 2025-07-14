#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number ";
    cin>>n; // Read an integer from user input
    // Check if the number is positive, negative, or zero
    if(n>=0){
        cout<<"The number is positive."<<endl; // Output if n is non-negative
    } else {
        cout<<"The number is negative."<<endl; // Output if n is negative
    }
    return 0;
}